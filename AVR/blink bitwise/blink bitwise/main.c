/*
 * blink bitwise.c
 *
 * Created: 15-11-2025 20:36:53
 * Author : adler
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD|=(1<<DDD5); //SET DDRD5 AS 1
	
    while (1) 
    { PORTD|=(1<<PD5);
		_delay_ms(1000);
	 PORTD&=~(1<<PD5);
    }
}

