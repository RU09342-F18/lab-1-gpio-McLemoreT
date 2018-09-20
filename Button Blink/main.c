#include <msp430.h> 


#define Btn BIT3                 //Define "BUTTON" as bit 3.
#define LED BIT0                   //Define "LED0" as bit 0.
#define PnB (P1IN & BUTTON) //Define "INP" for checking if there is an input on pin 1.3.

/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    int i = 0;

    P1SEL &= (~LED & ~Btn);

    P1DIR |= LED;
    P1OUT &= ~LED;

    P1DIR &= ~Btn;
    P1REN |= Btn;
    P1OUT |= Btn;



}
