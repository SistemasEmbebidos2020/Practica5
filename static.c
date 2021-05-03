/*CODIGO ASIGNACION ESTATICA*/
#include <avr/io.h>
#include <stdlib.h> //libreria para almacenar variables en la FLASH
#define MAX_DATOS 100 //Cantidad de memoria máxima a reservar de manera estatica
#define SEMILLA 0
uint8_t estatico[MAX_DATOS];
uint8_t cantidad,i;
uint8_t numeroAleatorio(){
 return random()%MAX_DATOS; //valor aleatorio entre [0-100)
}
void iniciarArreglo(){ //Para ver de manera gráfica en el Proteus el tamaño del arreglo
 uint8_t j=0;
 for(j=0;j<MAX_DATOS;j++) estatico[j] = 0xFF;
}
void llenarNumeros(uint8_t cantidad){
 for(i=0;i<cantidad;i++){
 estatico[i] = 32 + random()%96; //valor aleatorio entre [32 - 128)
 }
 srandom(cantidad);
}
int main(){
 srandom(SEMILLA);
 while (1){
 iniciarArreglo();
 cantidad=numeroAleatorio();
 llenarNumeros(cantidad);
 }
 return 0;
}
