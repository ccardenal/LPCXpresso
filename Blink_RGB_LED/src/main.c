/*
===============================================================================
 Name        : prova.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/


#include "bsp.h"


int main(void) {
	// Set P0_22 to 00 - GPIO
	LPC_PINCON->PINSEL1 &= (~(3 << 12));
	LPC_PINCON->PINSEL7 &= (~(3 << 18)); //Set P3.25 to 00 - GPIO
	LPC_PINCON->PINSEL7 &= (~(3 << 20)); //Set P3.26 to 00 - GPIO
	// Set GPIO - P0_22 - to be output
	LPC_GPIO0->FIODIR |= RED;
	LPC_GPIO3->FIODIR |= GREEN;
	LPC_GPIO3->FIODIR |= BLUE;

	LPC_GPIO0->FIOCLR = RED;
	LPC_GPIO3->FIOSET = GREEN;
	LPC_GPIO3->FIOSET = BLUE;


	SysTick->LOAD = (SYS_CLOCK_HZ/6U) - 1U;
	SysTick->VAL  = 0U;
	SysTick->CTRL = (1U << 2) | (1U << 1) | 1U;

	//__enable_irq();


	while (1) {
		//SysTick will trigger
	}
    return 0 ;
}
