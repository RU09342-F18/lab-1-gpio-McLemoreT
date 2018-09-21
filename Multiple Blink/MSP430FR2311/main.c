#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;
        P1DIR |= BIT0;                          //set P1.0 and P1.6 as an output. Use "|=" so that it does not overwrite unnecessary bits
        P2DIR |= BIT0;

        volatile unsigned int i;                //This will not be optimized and removed by the compiler
        volatile unsigned int time = 0;         //This will not be optimized and removed by the compiler

        while(1){                            //Infinite while loop
            if(time % 5000 == 0){           //Test if the current value of time is divisible by 5000
                P1OUT ^= BIT0;              //If time is divisible by 5000 then flip the value of BIT0 (LED 0)
            }
            if(time % 7000 == 0){           //Test if the current value of time is divisible by 7000
                P2OUT ^= BIT0;              //If time is divisible by 7000 then flip the value of BIT6 (LED 6)
            }
            time ++;                        //Increase the value of time so that time can "move forward" in this simulation
}

}
