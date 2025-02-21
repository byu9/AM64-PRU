#ifndef H26E5B437_941E_4F05_A825_78BC7BAEFC07
#define H26E5B437_941E_4F05_A825_78BC7BAEFC07

#include <stdint.h>

/*
 * PRU Pin Control
 * John Yu byu9@ncsu.edu 2/18/2025
 */

void pru_raise_pins(uint32_t pin_mask);
void pru_lower_pins(uint32_t pin_mask);
void pru_toggle_pins(uint32_t pin_mask);


#endif /* H26E5B437_941E_4F05_A825_78BC7BAEFC07 */
