/* Board Support Package */

#include "bsp.h"

__attribute__((naked)) void assert_failed (char const *file, int line) {
    /* TBD: damage control */
    NVIC_SystemReset(); /* reset the system */
}

void SysTick_Handler(void) {
	volatile static uint32_t i;
	for (i = 0; i < 7000000; i++);
	if (((LPC_GPIO0->FIOPIN >> 22) & 1) == 0){ //RED ON
		//LPC_GPIO0->FIOSET = RED; //RED OFF Faster approach
		//LPC_GPIO3->FIOCLR = GREEN; //GREEN ON Faster approach
		LPC_GPIO0->FIOPIN ^= (1 << 22);  //RED Toggle Slower approach
		LPC_GPIO3->FIOPIN ^= (1 << 25);  //GREEN Toggle Slower approach
	}
	else if (((LPC_GPIO3->FIOPIN & (1 << 25))>>25) == 0){ //GREEN ON
		LPC_GPIO3->FIOSET = (1 << 25);
		LPC_GPIO3->FIOCLR = (1 << 26);
	}
	else if (((LPC_GPIO3->FIOPIN & (1 << 26))>>26) == 0){ //BLUE ON
		LPC_GPIO3->FIOSET = (1 << 26);
		LPC_GPIO0->FIOCLR = (1 << 22);
	}
}
