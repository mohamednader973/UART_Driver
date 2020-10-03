/*
 * Uart_Driver.c
 *
 * Created: 10/3/2020 10:32:25 PM
 * Author : monad
 */ 

#include "Uart.h"
#include <avr/io.h>
int main(void)
{
	DDRC |=(1<<7);
	UART_Init();
	//UART_Send('n');
    /* Replace with your application code */
    while (1) 
    {
		if (UART_Recieve()=='1')  // from bluetooth module
		{
			PORTC |=(1<<7);
		}
		if (UART_Recieve()=='2')  // from bluetooth module
		{
			PORTC &=~(1<<7);
		}
    }
}

