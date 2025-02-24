/*
 * John Yu
 * byu9@ncsu.edu
 * 2/18/2025
 */
#include "pru_platform.h"



void main(void)
{
    pru_use_peripheral_pin_control();
    pru_use_three_phase_pwm();

    pru_set_pwm_duty(0.1, 0.2, 0.3);
    pru_start_pwm_timer();

    for (;;)
    {
        pru_set_pwm_duty(0.01, 0.02, 0.03);
    }
}

