#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM AVR
#include <avr/io.h>


#ifndef EepromReadSpace
#define EepromReadSpace
uint8_t readeeproms(uint8_t * pos)
{
return eeprom_read_byte((uint8_t *)(pos));
}
#endif
