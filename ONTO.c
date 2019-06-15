/*
 * GccApplication21.c
 *
 * Created: 15-Jun-19 8:06:08 PM
 * Author : KISHORE BABU
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0xFF;
	while (1)
	{
		PORTD = 0xF0;
		_delay_ms(220);
		PORTD = 0x0F;
		_delay_ms(220);
	}
}