#include <msp430.h> 


#define Btn BIT3                 //Define "Btn" as bit 3.
#define LED BIT0                   //Define "LED0" as bit 0.
#define PnB (P1IN & Btn)        //Define "INP" for checking if there is an input on pin 1.3.
                                //P1IN is the address of the register where all port bits are read
typedef int bool;
#define true 1
#define false 0
/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    bool i = 0;

    P1SEL &= (~LED & ~Btn);

    P1DIR |= LED;
    P1OUT &= ~LED;

    P1DIR &= ~Btn;
    P1REN |= Btn;
    P1OUT |= Btn;

    while(1){
        if(!PnB && !i){
                    P1OUT ^= LED;
                    i = 1;
        }
        else if(PnB && i){
                   i = 0;
       }

    }


}
