#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM AVR
#include <util/delay.h>
#include <avr/io.h>

uint8_t valor,dato=0;

int main(void)
{
  DDRD=0xFF; //como salidas digitales
  PORTD=0x00; //se inicia a 0
  //`eeprom_write_byte(0x00,0xAA);
  DDRB &= ~(1<<0);
  PORTB = 1<<0;
  valor = eeprom_read_byte(0); //en la variable dato de la EEPROM AVR
	
	while(1) //ciclo del programa
  {
	if (!(PINB0 &= (1<<0))) {
		while (!(PINB &= (1<<0))) {}
			dato ++;
			eeprom_write_byte(0x00,dato);
			valor = eeprom_read_byte(0); //en la variable dato de la EEPROM AVR
	}
PORTD = valor;

}
}
