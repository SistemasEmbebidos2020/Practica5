#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM AVR
#include <avr/io.h>


#ifndef readeeprom
#define readeeprom
void readeeproms(uint8_t pos)
{
eeprom_read_byte((uint8_t *)(pos));
}
#endif
