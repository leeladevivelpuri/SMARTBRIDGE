/*
 * GccApplication29.c
 *
 * Created: 15-Jun-19 8:34:22 PM
 * Author : KISHORE BABU
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
	/*set fast pwm mode with non inverted output*/
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);
}


int main()
{
	/* Replace with your application code */
	unsigned char duty;
	PWM_init();
	while (1)
	{
		for (duty=0;duty<225;duty++)
		{
			OCR0=duty;
			_delay_ms(10);
			
		}
		for (duty=225;duty>1;duty--)
		{
			OCR0=duty;
			_delay_ms(10);
			
		}
	}
}
