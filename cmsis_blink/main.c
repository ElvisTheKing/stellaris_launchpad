#include <stdint.h>
#include "LM4F120H5QR.h"


int main(void) {
	volatile unsigned long ulLoop;

	//	enable gpio clocking, F port
	SYSCTL->RCGCGPIO = (1<<5);

    ulLoop = GPIOF->DATA;

    // set port as output
	GPIOF->DIR |= 0x0e;
   	// enable digital
	GPIOF->DEN |= 0x0e;

	while (1) {
		GPIOF->DATA = 0x0e;
        for(ulLoop = 0; ulLoop < 200000; ulLoop++)
        {
        }

		GPIOF->DATA = 0;
        for(ulLoop = 0; ulLoop < 200000; ulLoop++)
        {
        }

	}

}
