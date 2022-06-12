
#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM AVR
#include <util/delay.h>
#include <avr/io.h>

#ifndef eepromwrite
#define eepromwrite

//volatile static 
void eepromwrites()
{

int i=0;
for(i=0;i<16;i++)
 {
 eeprom_write_byte((uint8_t *)(i),i);
	_delay_ms(500);

	}
}
#endif
