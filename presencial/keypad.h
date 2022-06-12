
//#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#ifndef keypad
#define keypad


//CLAVES PREDEFINIDAS PARA EL ACCESO
int i,j;
int contador=13;
unsigned char tabla[16]={
	'1', '2', '3', 'A',
	'4', '5', '6', 'B',
	'7', '8', '9', 'C',
    '*', '0', '#', 'D' };

//FUNCION PARA INICIALIZAR EL TECLADO QUE INICIALIZAN LOS PINES QUE ESTAR N CONECTADOS
void KEYPAD_init(void)
{
	//CONFIGURACI N DE LOS PINES DE LAS FILAS COMO SALIDAS
	DDRB = 0B1111;
	PORTB = 0B1111;
	//activacion pullup puertoC para columnas
	PORTC = 0B1111;
}

char KEYPAD_read()
{
	
	for(i = 1;i<5;i++)
	{
		PORTB = ~(1<<(i-1)) ;
		_delay_ms(10);
		for (j=1;j<5;j++)
		{
			if(!(PINC&(1<<(j-1))))
			{
				while(!(PINC&(1<<(j-1)))) {}
				if (i == 1)	contador = (j-1);
				else if (i == 2)	contador = (j+3);
				else if (i == 3)	contador = (j+7);
				else if (i == 4)	contador = (j+11);	 	   
			}
		}
	}
	return tabla[contador];
}

#endif
