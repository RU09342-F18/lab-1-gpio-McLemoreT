
//ButtonBlink2311

#include <msp430.h>

typedef int bool;

#define true 1
#define false 0
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1SEL0 &= ~BIT1;            // Set P1.1 (Button) to GPIO
    P1SEL1 &= ~BIT1;
    P2SEL0 &= ~BIT0;            // Set P2.0 (LED) to GPIO
    P2SEL1 &= ~BIT0;
    P2DIR |= 0x0001;          // Set LED to output
    P1DIR &= ~0x0002;         // Set Button as input
    P1REN |= 0x0002; // Turn on pullup resistor
        bool i = 0;


    while(1){                   //Start an infinite while loop.
        if(!P1IN && !i){         //If the button is pushed and the boolean is false
                    P1OUT ^= BIT1;   //Flip the value of the LED
                    i = 1;          //Flip the Value of the Boolean
        }
        else if(P1IN && i){          //If the button is pushed and the boolean is true
                   i = 0;           //Set the Boolean to be true
       }

    }

}
