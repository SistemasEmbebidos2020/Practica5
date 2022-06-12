#include <avr/io.h>
#include "keypad.h"
static unsigned char val = '0';
void leds()
{
KEYPAD_init();
DDRD = 255;
//PORTB = 0B1111;
while(1){
val = KEYPAD_read();
if (val == '1') PORTD = 1;
else if (val == '2') PORTD = 2;
else if (val == '3') PORTD = 3;
else if (val == '4') PORTD = 4;
else if (val == '5') PORTD = 5;
else if (val == '6') PORTD = 6;
else if (val == '7') PORTD = 7;
else if (val == '8') PORTD = 8;
else if (val == '9') PORTD = 9;
else if (val == '0') PORTD = 0;
else if (val == 'A') PORTD = 10;
else if (val == 'B') PORTD = 11;
else if (val == 'C') PORTD = 12;
else if (val == 'D') PORTD = 13;
else if (val == '*') PORTD = 14;
else if (val == '#') PORTD = 15;
}

}

