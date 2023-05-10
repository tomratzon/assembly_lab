#ifndef _bsp_H_
#define _bsp_H_

#include  <msp430.h>          // MSP430x2xx
//#include <msp430g2553.h>
#define   Timer_A_cnrl    &TACTL  //control register for A timer 
#define   Timer_A_cnrl1    &TA1CTL  //control register for A timer 
#define   Timer_ACC0_cnrl &TACCTL0 //Timer A Capture/Compare Control 0 
#define   Timer_ACC1_cnrl &TACCTL1 //Timer A Capture/Compare Control 1
#define   Timer_ACC2_cnrl &TACCTL2 //Timer A Capture/Compare Control 1

#define  DataSegStart      0x200
#define  CodeSegStart      0xC000
#define  StackTosStart     0x0400

#define   debounceVal      250
#define   delay62_5ms      0xFFFF

#define PB0      0x01
#define PB1      0x02
#define PB2      0x04
#define PB3      0x08

#define sec     1048218

#define LCD_DATA_Byte &P1OUT   
#define LCD_CONTROL   &P2OUT
#endif



