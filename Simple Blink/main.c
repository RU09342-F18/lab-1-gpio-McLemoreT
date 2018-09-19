#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	            // stop watchdog timer
	P1DIR |= 0x01;                          //set P1.0 as an output. Use "|=" so that it does not overwrite unessesary bits
	volatile unsigned int i;                //This will not be optimized and removed by the compiler
	while(true){                            //Infinite while loop
	    P1OUT ^= 0x01;                      //Flip P1OUT to be the oposite of what it was before
	    for(i = 0; i < 20000; i++);         //A for loop that counts up, basically a delay that occupis CPU cycles
	}
}
