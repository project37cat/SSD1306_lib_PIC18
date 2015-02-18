//SSD1306 test
//
//PIC18LF4320 8MHz
//
//HI-TECH C Compiler


#define _XTAL_FREQ 8000000  


#include "oled.h"


__CONFIG(1, HS );
__CONFIG(2, BORDIS & WDTDIS );


void main(void)
{
oled_init();
oled_clear();

oled_goto(0,0);
oled_string("Hello world!");

oled_goto(0,1);
oled_string("1234567890");

oled_goto(24,2);
oled_string("***");

for(;;);

}
