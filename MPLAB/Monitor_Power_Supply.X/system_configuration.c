/*
 * File:   system_configuration.c
 * Author: zachar.papkov
 *
 * Created on March 24, 2020, 4:19 PM
 */
#include "system_configuration.h"
#include "pin_manager.h"
#include "lcd.h"
#include "config.h"
#include "lcd_string.h"

void System_Test(void)
{
         __delay_ms(500);   
     IO_RA2_SetHigh() ;
      lcd_put_float(5.25,LCD_START_POSITION);
     __delay_ms(500);
    IO_RA2_SetLow();     
     lcd_put_float(4.75,LCD_START_POSITION);
    
}
