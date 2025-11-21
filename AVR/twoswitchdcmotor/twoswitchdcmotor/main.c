/*
 * twoswitchdcmotor.c
 *
 * Created: 21-11-2025 22:05:49
 * Author : adler
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
   DDRD&=~(1<<DDD0);
   DDRB&=~(1<<DDB0);
   DDRD|=(1<<DDD1),(1<<DDD2);
   
    while (1) 
    {
		if(PIND&(1<<PD0))
		{
			PORTD|=(1<<PD1);
			PORTD&=~(1<<PD2);
		}
		else
		{
			PORTD&=~(1<<PD1);
			PORTD&=~(1<<PD2);
		}
		
		if(PINB&(1<<PB0))
		{
			PORTD&=~(1<<PD1);
			PORTD|=(1<<PD2);
			
		}
		else
		{
			PORTD&=~(1<<PD1);
			PORTD&=(1<<PD2);
		}
	}	
}

