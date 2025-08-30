/*
		BY JUNAID ALAM
		LEANING NUVOTON FRON BASIC 
		8051 ARCHITECHTURE
		PART ONE
*/
// INCLUDING LIBRARY

#include "N76E003.h"
#include "SFR_Macro.h"
#include "Function_define.h"
#include "Common.h"
#include "Delay.h"
#include <N76E003.H>
#define delay_ms(x) Timer2_Delay500us(x*2)// USING TIMER2 FOR DELAY 



void main(void)
{
  P10_PushPull_Mode;// DEFINE P10 OUTPUT
	
	while(1)// infinite loop
	{
		P10=1;           // LED ON
		delay_ms(500);   // ON TIME
		P10=0;					 // LED OFF
		delay_ms(500);   // OFF TIME
	}                 
}
/*
		HARDWARE DISCRIPTION
    CONNECT PIN NO 7 TO GROUNG
    CONNECT PIN NO 9 TO 5V POSITIVE 
    CONNECT LED ANODE TO PIN NO 15
		CONNECT LED CATHODE TO GROUND
*/