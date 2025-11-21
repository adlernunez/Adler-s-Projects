/*
 * led with input.c
 *
 * Created: 21-11-2025 10:38:22
 * Author : adler
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>



int main(void)
{
    DDRD&=~(1<<DDD2);
	DDRB|=(1<<DDB5);
	
    while (1) 
    { if(PIND&(1<<PD2))
		{
			PORTB|=(1<<PB5);
		}
	 else
		{
		    PORTB&=~(1<<PB5);
		}
		
    }
}

