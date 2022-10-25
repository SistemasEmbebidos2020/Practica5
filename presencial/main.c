

#include <Arduino.h>

////////PRIMERA

//Para leer posicion de la memoria eeprom
//lo realizamos con el siguiente codigo

#include "EepromReadSpace.h"

uint8_t * posicion = 0;
void setup(){
  Serial.begin(115200);
  Serial.println(readeeproms(posicion));
}

void loop(){
  
}
/////////FIN
////////PRIMERA



///////////////SEGUNDA PARTE DE LA PRACTICA//////////
/*
//Para escribir un valor en cualquier posicion de la eeprom
#include "eepromwrite.h"

uint8_t * posicion = 0;
int valor = 100;

void setup(){
  eepromwrites(posicion,valor);
}
void loop(){
}
*/
