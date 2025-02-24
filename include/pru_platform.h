#ifndef HFAE3BD05_953F_43C1_B62B_29D23A636A27
#define HFAE3BD05_953F_43C1_B62B_29D23A636A27

#include <stdint.h>


/*
 * John Yu
 * byu9@ncsu.edu
 * 2/18/2025
 */


/*
 * PRU Software Pin Control
 * This is for when the PRU internal PINMUX is configured
 * to GPIO mode.
 */
void pru_use_software_pin_control(void);
void pru_raise_pins(uint32_t pin_mask);
void pru_lower_pins(uint32_t pin_mask);
void pru_toggle_pins(uint32_t pin_mask);


/*
 * PWM Control
 *
 * On the device level PINMUX, use Linux to set the following pins to
 * MUX mode 3 (0x00014003)
 * PRU Header 25 PRG0_PWM0_A0/PRG0_PRU0_GPO12 : PAGCONFIG100 @ 0x000F_4190
 * PRU Header 26 PRG0_PWM0_B0/PRG0_PRU0_GPO13 : PAGCONFIG101 @ 0x000F_4194
 * PRU Header 27 PRG0_PWM0_A1/PRG0_PRU0_GPO14 : PAGCONFIG102 @ 0x000F_4198
 * PRU Header 28 PRG0_PWM0_B1/PRG0_PRU0_GPO15 : PAGCONFIG103 @ 0x000F_419C
 * PRU Header 7  PRG0_PWM0_A2/PRG0_PRU0_GPO16 : PAGCONFIG104 @ 0x000F_41A0
 * PRU Header 30 PRG0_PWM0_B2/PRG0_PRU0_GPO17 : PAGCONFIG105 @ 0x000F_41A4
 */
void pru_use_peripheral_pin_control(void);
void pru_use_three_phase_pwm(void);
void pru_start_pwm_timer(void);
void pru_stop_pwm_timer(void);
void pru_set_pwm_duty(float a, float b, float c);

#endif /* HFAE3BD05_953F_43C1_B62B_29D23A636A27 */
