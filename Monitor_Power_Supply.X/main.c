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


#define MAX_PRECISION                   (10)
#define LEVEL_ACCURECTY_FLOAT_TO_STRING (2)

char * ftoa(double f, char * buf, int precision);

static const double rounders[MAX_PRECISION + 1] =
{
	0.5,				// 0
	0.05,				// 1
	0.005,				// 2
	0.0005,				// 3
	0.00005,			// 4
	0.000005,			// 5
	0.0000005,			// 6
	0.00000005,			// 7
	0.000000005,		// 8
	0.0000000005,		// 9
	0.00000000005		// 10
};


void main(void)
{
    char lcd_float_ans[5];
    char lcd_float_buff[5];
        TRISA = 0b00011011; //0x1B;      // RA2 & RA5 as output
    TRISB = 0xF0;      // RB0~RB3 as input
    TRISC = 0x00;      // all output
    TRISD = 0x00;      // all output
     
    PORTB = 0x00;
    PORTC = 0x00;
    PORTD = 0x00;
  
    
    lcd_init();
    lcd_clear();
    lcd_goto(0);
    lcd_puts(ftoa(8.25f,lcd_float_ans,2));
    //__delay_ms(1000);
    //lcd_clear();
    //r_init();
    
    while(1)
    {
        //strcpy(lcd_float_ans,ftoa(4.75f,lcd_float_ans,2));
        
     __delay_ms(500);   
     RA2=1;
     lcd_goto(0);
        lcd_puts(ftoa(5.25f,lcd_float_ans,2));
     __delay_ms(500);
     RA2=0;
     
           //strcpy(lcd_float_ans,ftoa(2.75f,lcd_float_ans,2));
        lcd_goto(0);
        lcd_puts(ftoa(4.75f,lcd_float_ans,2));
    }
    return;
}




char * ftoa(double f, char * buf, int precision)
{
	char * ptr = buf;
	char * p = ptr;
	char * p1;
	char c;
	long intPart;

	// check precision bounds
	if (precision > MAX_PRECISION)
		precision = MAX_PRECISION;

	// sign stuff
	if (f < 0)
	{
		f = -f;
		*ptr++ = '-';
	}

	if (precision < 0)  // negative precision == automatic precision guess
	{
		if (f < 1.0) precision = 6;
		else if (f < 10.0) precision = 5;
		else if (f < 100.0) precision = 4;
		else if (f < 1000.0) precision = 3;
		else if (f < 10000.0) precision = 2;
		else if (f < 100000.0) precision = 1;
		else precision = 0;
	}

	// round value according the precision
	if (precision)
		f += rounders[precision];

	// integer part...
	intPart = f;
	f -= intPart;

	if (!intPart)
		*ptr++ = '0';
	else
	{
		// save start pointer
		p = ptr;

		// convert (reverse order)
		while (intPart)
		{
			*p++ = '0' + intPart % 10;
			intPart /= 10;
		}

		// save end pos
		p1 = p;

		// reverse result
		while (p > ptr)
		{
			c = *--p;
			*p = *ptr;
			*ptr++ = c;
		}

		// restore end pos
		ptr = p1;
	}

	// decimal part
	if (precision)
	{
		// place decimal point
		*ptr++ = '.';

		// convert
		while (precision--)
		{
			f *= 10.0;
			c = f;
			*ptr++ = '0' + c;
			f -= c;
		}
	}

	// terminating zero
	*ptr = 0;

	return buf;
}

