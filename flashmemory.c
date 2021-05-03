#include <avr/io.h>
#include <avr/pgmspace.h> //libreria para almacenar variables en la FLASH
const char texto_flash[] PROGMEM = "Este texto se encuentra en la memoria FLASH";
char texto_sram[];
int main(){
 uint8_t i=0;
 do{
texto_sram[i] = pgm_read_byte(&texto_flash[i]);
 }while(texto_sram[i++] !=0);
 while (1){
 asm("NOP"); //Para que no se elimine el paso a paso de Proteus
 }
 return 0;
}
