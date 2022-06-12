
#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM AVR
#include <util/delay.h>
#include <avr/io.h>

static uint8_t i = 0;
uint8_t *k = 0;
void main()
{
for(i=0;i<16;i++)
 {
 eeprom_write_byte(i,i);
	_delay_ms(500);

	}
}
