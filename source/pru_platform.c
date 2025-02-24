/*
 * pru_pins.c
 *
 *  Created on: Feb 20, 2025
 *  John Yu
 *  byu9@ncsu.edu
 */
#include <math.h>
#include <stdbool.h>
#include "pru_platform.h"
#include "pru_periph.h"


static void assert(bool cond);
static void unrecoverable_error(void) __attribute__((noreturn));


/*
 * Special directives on TI-PRU compilers
 *
 * The compiler will always allocate these two variables
 * in the corresponding registers.
 *
 * See 5.7.2 on PRU Compiler User Guide SPRUHV7B
 */

volatile register unsigned int __R30;
volatile register unsigned int __R31;

void pru_raise_pins(uint32_t pin_mask)
{
    __R30 |= pin_mask;
}

void pru_lower_pins(uint32_t pin_mask)
{
    __R30 &= ~pin_mask;
}

void pru_toggle_pins(uint32_t pin_mask)
{
    __R30 ^= pin_mask;
}

void pru_use_software_pin_control(void)
{
    PRU_CFG->GPCFG0_REG_bit.PR1_PRU0_GP_MUX_SEL = 0;
}

void pru_use_peripheral_pin_control(void)
{
    PRU_CFG->GPCFG0_REG_bit.PR1_PRU0_GP_MUX_SEL = 1;
}




#define PWM_DESIRED_HZ           (10000)
#define IEP_BASE_HZ              (250000000)

#define IEP_COUNTER_HIGH_LIMIT   \
    ((uint32_t) (IEP_BASE_HZ / PWM_DESIRED_HZ / 2))

void pru_use_three_phase_pwm(void)
{
    // Enable clocks
    PRU_CFG->CGR_REG_bit.IEP_CLK_EN = 1;
    PRU_CFG->CGR_REG_bit.INTC_CLK_EN = 1;
    PRU_CFG->CGR_REG_bit.TOP_HALF_CLK_GATE_EN = 1;
    PRU_CFG->CGR_REG_bit.BOTTOM_HALF_CLK_GATE_EN = 1;
    PRU_CFG->CGR_REG_bit.AUTO_SLICE0_CLK_GATE_EN = 1;
    PRU_CFG->CGR_REG_bit.AUTO_SLICE1_CLK_GATE_EN = 1;
    PRU_CFG->SA_MX_REG_bit.PWM_EFC_EN = 1;


    /*
     * Configure PWM channels
     */
    // In TRIP mode, configure all PWM outputs to be low
    PRU_CFG->PWM0_0_bit.PWM0_0_POS_TRIP = 1;
    PRU_CFG->PWM0_0_bit.PWM0_0_NEG_TRIP = 1;
    PRU_CFG->PWM0_1_bit.PWM0_1_POS_TRIP = 1;
    PRU_CFG->PWM0_1_bit.PWM0_1_NEG_TRIP = 1;
    PRU_CFG->PWM0_2_bit.PWM0_2_POS_TRIP = 1;
    PRU_CFG->PWM0_2_bit.PWM0_2_NEG_TRIP = 1;

    // In INIT mode, configure all PWM outputs to be low
    PRU_CFG->PWM0_0_bit.PWM0_0_POS_INIT = 1;
    PRU_CFG->PWM0_0_bit.PWM0_0_NEG_INIT = 1;
    PRU_CFG->PWM0_1_bit.PWM0_1_POS_INIT = 1;
    PRU_CFG->PWM0_1_bit.PWM0_1_NEG_INIT = 1;
    PRU_CFG->PWM0_2_bit.PWM0_2_POS_INIT = 1;
    PRU_CFG->PWM0_2_bit.PWM0_2_NEG_INIT = 1;

    // In ACT mode, configure the upper PWM outputs to HIGH, and lower to LOW
    PRU_CFG->PWM0_0_bit.PWM0_0_POS_ACT = 2;
    PRU_CFG->PWM0_0_bit.PWM0_0_POS_ACT = 2;
    PRU_CFG->PWM0_1_bit.PWM0_1_POS_ACT = 2;
    PRU_CFG->PWM0_1_bit.PWM0_1_NEG_ACT = 1;
    PRU_CFG->PWM0_2_bit.PWM0_2_NEG_ACT = 1;
    PRU_CFG->PWM0_2_bit.PWM0_2_NEG_ACT = 1;

    /*
     * Configure IEP0 Timer
     * Operates in 32-bit shadow mode
     * Compare channels
     *     CMP0       : resets the counter
     *     CMP1, CMP2 : PWM channel A
     *     CMP3, CMP4 : PWM channel B
     *     CMP5, CMP6 : PWM channel C
     */
    PRU_IEP0->GLOBAL_CFG_REG_bit.CNT_ENABLE = 0;
    PRU_IEP0->GLOBAL_CFG_REG_bit.DEFAULT_INC = 1;
    PRU_IEP0->GLOBAL_CFG_REG_bit.CMP_INC = 1;

    PRU_IEP0->CMP_CFG_REG_bit.SHADOW_EN = 1;

    // Enable the first 7 channels
    PRU_IEP0->CMP_CFG_REG_bit.CMP_EN = 0x7F;

    // Counter resets on Compare 0 event
    PRU_IEP0->CMP_CFG_REG_bit.CMP0_RST_CNT_EN = 1;

    // Counter
    PRU_IEP0->COUNT_REG0 = 0;
    PRU_IEP0->COUNT_REG1 = 0;
    PRU_IEP0->COUNT_RESET_VAL_REG0 = 0;
    PRU_IEP0->COUNT_RESET_VAL_REG1 = 0;

    PRU_IEP0->CMP0_REG0 = IEP_COUNTER_HIGH_LIMIT;
    PRU_IEP0->CMP0_REG1 = IEP_COUNTER_HIGH_LIMIT;

    PRU_IEP0->CMP1_REG0 = 0;
    PRU_IEP0->CMP1_REG1 = 0;

    PRU_IEP0->CMP2_REG0 = 0;
    PRU_IEP0->CMP2_REG1 = 0;

    PRU_IEP0->CMP3_REG0 = 0;
    PRU_IEP0->CMP3_REG1 = 0;

    PRU_IEP0->CMP4_REG0 = 0;
    PRU_IEP0->CMP4_REG1 = 0;

    PRU_IEP0->CMP5_REG0 = 0;
    PRU_IEP0->CMP5_REG1 = 0;

    PRU_IEP0->CMP6_REG0 = 0;
    PRU_IEP0->CMP6_REG1 = 0;
}


#define IS_BETWEEN(VAL, LO, HI) \
    (((VAL) >= (LO)) && ((VAL) <= (HI)))

void pru_set_pwm_duty(float a, float b, float c)
{
    assert(IS_BETWEEN(a, 0.0, 1.0));
    assert(IS_BETWEEN(b, 0.0, 1.0));
    assert(IS_BETWEEN(c, 0.0, 1.0));

    const uint32_t threshold_a = (uint32_t) (a * IEP_COUNTER_HIGH_LIMIT);
    const uint32_t threshold_b = (uint32_t) (b * IEP_COUNTER_HIGH_LIMIT);
    const uint32_t threshold_c = (uint32_t) (c * IEP_COUNTER_HIGH_LIMIT);

    PRU_IEP0->CMP1_REG1 = threshold_a;
    PRU_IEP0->CMP2_REG1 = threshold_a;
    PRU_IEP0->CMP3_REG1 = threshold_b;
    PRU_IEP0->CMP4_REG1 = threshold_b;
    PRU_IEP0->CMP5_REG1 = threshold_c;
    PRU_IEP0->CMP6_REG1 = threshold_c;
}

void pru_start_pwm_timer(void)
{
    PRU_IEP0->GLOBAL_CFG_REG_bit.CNT_ENABLE = 1;
}

void pru_stop_pwm_timer(void)
{
    PRU_IEP0->GLOBAL_CFG_REG_bit.CNT_ENABLE = 0;
}



static void assert(bool cond)
{
    if (!cond)
        unrecoverable_error();
}

static void unrecoverable_error(void)
{
    for (;;)
    {
    }
}
