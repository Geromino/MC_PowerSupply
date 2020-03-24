/* 
 * File:pin manager   
 * Author: zachar papkov
 * Comments:
 * Revision history: 1.0
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef PIN_MANAGER_H_
#define PIN_MANAGER_H_

#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations
#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_SetHigh()            do { PORTAbits.RA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { PORTAbits.RA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { PORTAbits.RA2 = ~PORTAbits.RA2; } while(0)

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
void PIN_MANAGER_Initialize(void);
#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

