#ifndef __BSP_H__
#define __BSP_H__

/* Board Support Package for the EK-TM4C123GXL board */

/* system clock setting [Hz] */
#define SYS_CLOCK_HZ 100000000U

#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include <cr_section_macros.h>

/* on-board LEDs */
#define RED (1 << 22)
#define GREEN (1 << 25)
#define BLUE (1 << 26)

#endif // __BSP_H__
