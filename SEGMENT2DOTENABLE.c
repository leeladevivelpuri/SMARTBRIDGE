/*
 * GccApplication19.c
 *
 * Created: 15-Jun-19 8:01:37 PM
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
		PORTD =0b01100000;
		_delay_ms(3000);
		PORTD= 0b11011010;
		_delay_ms(3000);
		PORTD= 0b11110010;
		_delay_ms(3000);
		PORTD= 0b01100110;
		_delay_ms(1000);
		PORTD= 0b10110110;
		_delay_ms(1000);
		PORTD= 0b10111110;
		_delay_ms(1000);
		PORTD= 0b11100000;
		_delay_ms(1000);
		PORTD= 0b11111110;
		_delay_ms(10000);
		PORTD= 0b11111100;
		_delay_ms(1000);
		PORTD =0b01100001;
		_delay_ms(3000);
		PORTD= 0b11011011;
		_delay_ms(3000);
		PORTD= 0b11110011;
		_delay_ms(3000);
		PORTD= 0b01100111;
		_delay_ms(1000);
		PORTD= 0b10110111;
		_delay_ms(1000);
		PORTD= 0b10111111;
		_delay_ms(1000);
		PORTD= 0b11100001;
		_delay_ms(1000);
		PORTD= 0b11111111;
		_delay_ms(10000);
		PORTD= 0b11111101;
		_delay_ms(1000);
		
	}
}
