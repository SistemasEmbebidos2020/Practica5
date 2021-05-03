/*CODIGO ASIGNACION DINAMICA*/
#include <avr/io.h>
#include <stdlib.h>
#define MAX_DATOS 100 //Cantidad de memoria máxima a reservar de manera estatica
#define SEMILLA 0
uint8_t cantidad,i;
char *ptr;
uint8_t numeroAleatorio(){
 return random()%MAX_DATOS; //valor aleatorio entre [0-100)
}
void llenarNumeros(uint8_t cantidad){
 ptr = (char * )malloc(cantidad*sizeof(char));
for(i=0;i<cantidad;i++){
ptr[i]=32 + random()%96; //valor aleatorio entre [32 - 128)
}
 free(ptr);
 srandom(cantidad); //cambia la semilla de los numeros aleatorios
}
int main()
{
 srandom(SEMILLA);
 while (1){
 cantidad=numeroAleatorio();
llenarNumeros(cantidad);
}
 return 0;
