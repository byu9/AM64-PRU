/*
 * John Yu
 * byu9@ncsu.edu
 * 2/18/2025
 */
#include "pru_platform.h"
#include "pru_periph.h"


void main(void)
{
    /*
     * On the device level PINMUX, use Linux to set the following pins to
     * MUX mode 3 (0x00014003)
     * PRU Header 25 PRG0_PWM0_A0/PRG0_PRU0_GPO12 : PAGCONFIG100 @ 0x000F_4190
     * PRU Header 26 PRG0_PWM0_B0/PRG0_PRU0_GPO13 : PAGCONFIG101 @ 0x000F_4194
     * PRU Header 27 PRG0_PWM0_A1/PRG0_PRU0_GPO14 : PAGCONFIG102 @ 0x000F_4198
     * PRU Header 28 PRG0_PWM0_B1/PRG0_PRU0_GPO15 : PAGCONFIG103 @ 0x000F_419C
     * PRU Header 7  PRG0_PWM0_A2/PRG0_PRU0_GPO16 : PAGCONFIG104 @ 0x000F_41A0
     * PRU Header 30 PRG0_PWM0_B2/PRG0_PRU0_GPO17 : PAGCONFIG105 @ 0x000F_41A4
     */
    pru_use_peripheral_pin_control();
    pru_use_three_phase_pwm();
    pru_start_pwm_timer();

    struct pwm_task_context pwm_task;
    pru_set_pwm_duty(&pwm_task, 0.1, 0.1, 0.1);

    for (;;)
    {
        service_pwm_task(&pwm_task);
    }
}

