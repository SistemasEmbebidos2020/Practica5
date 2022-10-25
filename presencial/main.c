#include <Arduino.h>

#include "EepromReadSpace.h"

int posicion = 0;
void setup(){
  Serial.begin(115200);
}

void loop(){
  Serial.println(readeeproms(posicion));
}
