/*
 * pru_pins.c
 *
 *  Created on: Feb 20, 2025
 *      Author: JohnYu
 */
#include "pru_pins.h"


/*
 * Special treatment on TI-PRU compilers
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

