#include <avr/eeprom.h> //archivo de cabecera para la utilización de la EEPROM
AVR
#include <util/delay.h>
#include <avr/io.h>
uint8_t EEMEM dato0 = 0x0A; //creación de la variable dato de 8 bits en la
EEPROM AVR
uint16_t EEMEM dato1 = 0xAABB;
uint8_t EEMEM dato2 = 0x55;
uint8_t EEMEM texto[] = "Hola Mundo";
uint8_t valor;
int main(void)
{
 DDRD=0xFF; //como salidas digitales
 PORTD=0x00; //se inicia a 0
 DDRB |= (0 << 0); //PIN 8 DE ARDUINO COMO ENTRADA
 DDRB |= (1 << 3); //pin 11 del Arduino como salida
valor = eeprom_read_byte(&dato2); //en la variable dato de la EEPROM
AVR
eeprom_write_byte(0xF0,0xCC);
eeprom_write_byte(&dato0,0xCC);
 while(1) //ciclo del programa
 {
 asm("NOP");
 }
}
