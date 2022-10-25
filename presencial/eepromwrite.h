
#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM AVR
#include <util/delay.h>
#include <avr/io.h>

#ifndef eepromwrite
#define eepromwrite

//volatile static 
void eepromwrites(uint8_t * pos, int val)
{

eeprom_write_byte((uint8_t *)(pos),val);
}
#endif
