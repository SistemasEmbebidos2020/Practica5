#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM AVR
#include <avr/io.h>
#include "keypad.h"

#ifndef readeeprom
#define readeeprom
void readeeproms()
{
eeprom_read_byte((uint8_t *)(1));
}
#endif
