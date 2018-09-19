#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	    P1DIR |= 0x01;                          //set P1.0 as an output. Use "|=" so that it does not overwrite unnecessary bits
	                                            //Need to set P1.6 direction?
	    volatile unsigned int i;                //This will not be optimized and removed by the compiler
	    volatile unsigned int time = 0;                //This will not be optimized and removed by the compiler

	    while(true){                            //Infinite while loop
	        if(time % 5000 == 0){
	            //toggle LED A
	            if(time > 7000){
	                time = 3000;
	            }
	        }
	        if(time % 7000 == 0){
	            //Toggle LED B
	        }
	        time ++;

	        //P1OUT ^= 0x01;                      //Flip P1OUT to be the opposite of what it was before
	        //for(i = 0; i < 20000; i++);         //A for loop that counts up, basically a delay that occupies CPU cycles
}
