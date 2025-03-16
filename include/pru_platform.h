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
 */
struct pwm_task_context {
    uint32_t compare_val_at_rising_a;
    uint32_t compare_val_at_rising_b;
    uint32_t compare_val_at_rising_c;

    uint32_t compare_val_at_falling_a;
    uint32_t compare_val_at_falling_b;
    uint32_t compare_val_at_falling_c;
};

void pru_use_peripheral_pin_control(void);
void pru_use_three_phase_pwm(void);
void pru_start_pwm_timer(void);
void pru_stop_pwm_timer(void);
void pru_set_pwm_duty(struct pwm_task_context *task, float a, float b, float c);
void service_pwm_task(struct pwm_task_context *task);

#endif /* HFAE3BD05_953F_43C1_B62B_29D23A636A27 */
