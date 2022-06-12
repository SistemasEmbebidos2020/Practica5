#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM AVR
#include <avr/io.h>
#include "keypad.h"
static unsigned char valor = '0';

void readeeproms()
{
KEYPAD_init();
DDRD = 255;
//PORTB = 0B1111;
while(1){
valor = KEYPAD_read();
if (valor == '1') PORTD = eeprom_read_byte(1);
else if (valor == '2') PORTD = eeprom_read_byte(2);
else if (valor == '3') PORTD = eeprom_read_byte(3);
else if (valor == '4') PORTD = eeprom_read_byte(4);
else if (valor == '5') PORTD = eeprom_read_byte(5);
else if (valor == '6') PORTD = eeprom_read_byte(6);
else if (valor == '7') PORTD = eeprom_read_byte(7);
else if (valor == '8') PORTD = eeprom_read_byte(8);
else if (valor == '9') PORTD = eeprom_read_byte(9);
else if (valor == '0') PORTD = eeprom_read_byte(0);
else if (valor == 'A') PORTD= eeprom_read_byte(10);
else if (valor == 'B') PORTD = eeprom_read_byte(11);
else if (valor == 'C') PORTD = eeprom_read_byte(12);
else if (valor == 'D') PORTD = eeprom_read_byte(13);
else if (valor == '*') PORTD  = eeprom_read_byte(14);
else if (valor == '#') PORTD  = eeprom_read_byte(15);
}

}

