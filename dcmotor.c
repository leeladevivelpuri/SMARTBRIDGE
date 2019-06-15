/*
 * GccApplication10.c
 *
 * Created: 15-Jun-19 7:33:37 PM
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
		PORTA = 0x01;
		_delay_ms(1000);
		PORTA = 0x02;
		_delay_ms(1000);
	}
}
