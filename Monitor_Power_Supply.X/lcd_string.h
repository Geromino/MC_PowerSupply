/* 
 * File:lcd_string.h  
 * Author: zachar papkov
 * Comments:
 * Revision history: 1.0
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef LCD_STRING_H_
#define LCD_STRING_H_

#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>
#define MAX_PRECISION                    (10)
#define LEVEL_ACCURECTY_FLOAT_TO_STRING  (2)
#define FLOAT_CASTING_STRING_BUFFER_SIZE (5)
#define LCD_START_POSITION               (0x0)
// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation
char * ftoa(double f, char * buf, int precision);
#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */