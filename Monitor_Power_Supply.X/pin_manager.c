/*
 * File:   pin_manager.c
 * Author: zachar.papkov
 *
 * Created on March 24, 2020, 4:02 PM
 */
#include "pin_manager.h"

void PIN_MANAGER_Initialize(void)
{
    /**
    PORTx registers
    */
    PORTB = 0x00;
    PORTC = 0x00;
    PORTD = 0x00;

    /**
    TRISx registers
    */
    TRISA = 0x1B;// 0b00011011; //0x1B;      // RA2 & RA5 as output
    TRISB = 0xF0;      // RB0~RB3 as input
    TRISC = 0x00;      // all output
    TRISD = 0x00;      // all output
    
}
