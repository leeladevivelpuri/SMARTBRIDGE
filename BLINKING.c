/*
 * GccApplication36.c
 *
 * Created: 15-Jun-19 8:51:45 PM
 * Author : KISHORE BABU
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA = 0xFF;
	while (1)
	{
		PORTA = 0xFF;
		_delay_ms(220);
		PORTA = 0x00;
		_delay_ms(220);
	}
}

