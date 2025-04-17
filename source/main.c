/*
 * John Yu
 * byu9@ncsu.edu
 * 2/18/2025
 */
#include "pru_periph.h"
#include <stddef.h>


/*
 * Bug catcher
 */
static void unrecoverable_error(void);
#define ASSERT(COND) \
    if (!(COND)) { \
        unrecoverable_error(); \
    }



/*
 * A third order comb filter with 28-bit arithmetic.
 */
struct third_order_comb
{
    uint32_t delayed1;
    uint32_t delayed2;
    uint32_t delayed3;
};

static void initialize_third_order_comb(struct third_order_comb *const filter)
{
    filter->delayed1 = 0;
    filter->delayed2 = 0;
    filter->delayed3 = 0;
}

static uint32_t update_third_order_comb(struct third_order_comb *const filter, const uint32_t input)
{
    const uint32_t mask_28b = 0x0FFFFFFF;

    const uint32_t subtractor1 = (input - filter->delayed1) & mask_28b;
    const uint32_t subtractor2 = (subtractor1 - filter->delayed2) & mask_28b;
    const uint32_t subtractor3 = (subtractor2 - filter->delayed3) & mask_28b;
    const uint32_t output = subtractor3;

    // Updates delay blocks.
    filter->delayed1 = input;
    filter->delayed2 = subtractor1;
    filter->delayed3 = subtractor2;

    return output;
}

static void pru_enable_circuit_clocks(void)
{
    PRU_CFG->CGR_REG_bit.BOTTOM_HALF_CLK_GATE_EN = 1;
    PRU_CFG->CGR_REG_bit.TOP_HALF_CLK_GATE_EN = 1;
}



/*
 * Sigma-Delta Demodulator Related
 */
static void pru_enable_circuit_clocks(void);

static void pru_use_sigma_delta_pin_mode(void);
static void pru_use_sigma_delta_channel0(void);
static void pru_reset_sigma_delta_channel(const uint32_t channel);
static void pru_enable_all_sigma_delta_channels(void);
static uint32_t pru_wait_for_sigma_delta_accumulator(const uint32_t channel);

#define EXPERIMENT_BUFFER_SIZE  (1024)
__attribute__((section(".noinit")))
volatile static uint32_t signal_buffer[EXPERIMENT_BUFFER_SIZE];

void main(void)
{
    /*
     * Device PINMUX Configurations
     *
     * Since the PRU firmware does not yet have the ability to access device pin configuration
     * registers, we assume the device pins have been configured through Linux or using the
     * firmware on the Cortex-R5 as follows:
     *
     * | Signal           | PADCONFIG Address | PADCONFIG Value | MUX Mode | BGA Ball | EVM PRU Connector |
     * | SD0_CLKIN (GPI0) | 0x000F4160 (88)   | 0x00250001      | 1        | Y1       | 13                |
     * | SD0_DATA  (GPI1) | 0x000F4164 (89)   | 0x00250001      | 1        | R4       | 14                |
     */
    struct third_order_comb comb_stage;
    initialize_third_order_comb(&comb_stage);

    pru_enable_circuit_clocks();

    pru_use_sigma_delta_pin_mode();
    pru_use_sigma_delta_channel0();
    pru_reset_sigma_delta_channel(0);
    pru_enable_all_sigma_delta_channels();

    uint16_t buffer_index = 0;
    for (;;)
    {
        const uint32_t accumulator = pru_wait_for_sigma_delta_accumulator(0);
        const uint32_t demodulated = update_third_order_comb(&comb_stage, accumulator);

        signal_buffer[buffer_index] = demodulated;

        ++buffer_index;
        buffer_index %= EXPERIMENT_BUFFER_SIZE;
    }
}



static void unrecoverable_error(void)
{
    for (;;)
    {
        // Intentionally left blank
    }
}


/*
 * When PRU internal PINMUX is set to sigma-delta demodulator mode, the CPU registers R30 and
 * R31 are connected to the PRU demodulator circuits.
 *
 * Special directives on TI-PRU compilers. The compiler will always allocate these two variables
 * in the corresponding registers. See 5.7.2 on PRU Compiler User Guide SPRUHV7B.
 */
volatile register unsigned int __R30;
volatile register unsigned int __R31;




/*
 * For an explanation of the activities in the following subroutines, see
 * section 6.4.5.2.2.3.5.4 in reference manual SPRUIM2H.
 */


static void pru_use_sigma_delta_pin_mode(void)
{
    /*
     * We configure the PRU internal PINMUX in sigma-delta demodulator mode.
     *
     * It is described in Section 6.4.5.2.2.3.5.1 in reference manual SPRUIM2H that the PRU
     * internal PINMUX must be set to 3 to enable the sigma-delta pin configuration. There are 8
     * sigma-delta demodulator channels and on each channel, both the sigma-delta clock and data
     * are inputs. If Manchester encoding mode is configured, the sigma-delta clock is superimposed
     * onto the data by the modulators, allowing the demodulators to use a specialized circuit to
     * recover the clocks. At this time we do not use Manchester encoding and a clock signal must
     * be provided to the demodulator circuit and the external modulator chip.
     */

    // Configures PRU internal PINMUX to signma-delta demodulator mode.
    PRU_CFG->GPCFG0_REG_bit.PR1_PRU0_GP_MUX_SEL = 3;
}

static void pru_use_sigma_delta_channel0(void)
{
    /*
     * Sigma-delta demodulator channel 0 configuration
     *
     * Step 1: Configure clock sources, accumulator source, and sample size.
     */

    // Step 1A: Select demodulator channel clock source
    // Selects clock input 0 as clock of channel 0.
    PRU_CFG->PRU0_SD_CLK_SEL_REG0_bit.PRU0_SD_CLK_SEL0 = 1;

    // Step 1B: Configure clock polarity.
    // The sigma-delta accumulator is updated on the rising edge of the clock.
    PRU_CFG->PRU0_SD_CLK_SEL_REG0_bit.PRU0_SD_CLK_INV0 = 0;

    // Step 1C: Select which accumulator to access.
    // Connects accumulator 3 to register R31.
    PRU_CFG->PRU0_SD_CLK_SEL_REG0_bit.PRU0_SD_ACC_SEL0 = 0;

    // Step 1D: Select how often the accumulator shadow is updated.
    // We update the accumulator shadow register every 128 samples, corresponding to a down-sample
    // ratio of 128.
    PRU_CFG->PRU0_SD_SAMPLE_SIZE_REG0_bit.PRU0_SD_SAMPLE_SIZE0 = 127; // Updates every 128 samples
}

static void pru_reset_sigma_delta_channel(const uint32_t channel)
{
    /*
     * Step 2: Reinitialize channels
     */

    // Step 2A: Select channel by writing to R30[29:26].
    __R30 = (__R30 & ~(0xF << 26)) | (channel << 26);

    // Step 2B: Delay at least 1 PRU cycle.
    __asm volatile("\n\t NOP");

    // Step 2C: Reinitialize selected channel by setting R31[23].
    __R31 |= 1 << 23;
}

static void pru_enable_all_sigma_delta_channels(void)
{
    /*
     * Step 3: Enables all channels by setting R30[25].
     */
    __R30 |= 1 << 25;
}

static uint32_t pru_wait_for_sigma_delta_accumulator(const uint32_t channel)
{
    ASSERT(channel <= 8);

    /*
     * Step 4: Select channel by writing to R30[29:26]
     */
    __R30 = (__R30 & ~(0xF << 26)) | (channel << 26);

    // Step 4A: Wait for accumulator data to be ready by polling R31[28].
    while (!(__R31 & (1 << 28)))
    {
        // Step 4B: Wait for at least 1 PRU cycle before polling again.
        __asm volatile("\n\t NOP");
    }

    // Step 4C: Read accumulator data from R31[27:0]
    const uint32_t accumulator_value = __R31 & 0x0FFFFFFF;

    // Step 4D: Clear shadow update flag by setting R31[24]
    __R31 |= 1 << 24;

    return accumulator_value;
}
