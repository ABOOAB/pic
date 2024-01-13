/*
 * File:   count.c
 * Author: abdoa
 *
 * Created on May 16, 2023, 11:54 PM
 */

#include <xc.h>
#include "config.h"
#define _XTAL_FREQ 4000000
#define trig RC1
#define eco RC0
float disCalc();

void main(void)
{
    TRISB = 0;
    PORTB = 0;
   // TRISC0 = 1;
    TMR1 = 0;
    T1CON = 0x0B;
//    TMR1CS = 1;
//    T1OSCEN = 1;
//    T1SYNC = 0;
//    T1CKPS0= 0;
//    T1CKPS1= 0;
//    TMR1ON = 1;
    while(1)
    {
        PORTB = TMR1;
    }
    
}
    