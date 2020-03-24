/*
 * File:   main.c
 * Author: electronics
 *
 * Created on March 14, 2020, 12:29 AM
 */

#include <xc.h>
#include <stdio.h>
#include "lcd.h"
#include "config.h"
#include "pin_manager.h"
#include "system_configuration.h"

void main(void)
{
    
   PIN_MANAGER_Initialize();
   lcd_start();
   
   
    
    while(1)
    {
       System_Test();
      
    }
    return;
}

