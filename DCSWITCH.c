/*
 * GccApplication31.c
 *
 * Created: 15-Jun-19 8:39:42 PM
 * Author : KISHORE BABU
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0x00;
	DDRA = 0xFF;
	while (1)
	{
		if((PIND&(1<<PD0))==0)
		{
			PORTA = 0x01;
			_delay_ms(1000);
			PORTA = 0x00;
		}
		if((PIND&(1<<PD1))==0)
		{
			PORTA = 0x02;
			_delay_ms(1000);
			PORTA = 0x00;
		}

		
	}
}
