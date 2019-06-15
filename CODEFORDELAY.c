/*
 * GccApplication34.c
 *
 * Created: 15-Jun-19 8:46:03 PM
 * Author : KISHORE BABU
 */ 
#include <avr/io.h>
#define LED PB0


int main(void)
{
	uint8_t timeroverflowcount=0;
	DDRB=0xFF;
	TCNT0 = 0x00;
	TCCR0=(1<<CS00)|(1<<CS02);
	
	while (1)
	{
		while((TIFR&0x01)==0);
		TCNT0=0x00;
		TIFR=0x01;
		timeroverflowcount++;
		if(timeroverflowcount>=5)
		{
			PORTB^=(0x01<<LED);
			timeroverflowcount=0;
		}
	}
}






