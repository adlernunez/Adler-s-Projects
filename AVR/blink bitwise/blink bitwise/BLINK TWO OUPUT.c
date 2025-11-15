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
    DDRD|=(1<<DD1); //SET DDRD1 AS 1
	DDRD|=(1<<DD2); //SET DDRD2 AS 1
	
    while (1) 
    {	PORTD|=(1<<PD1);
			_delay_ms(5000);
		PORTD&=~(1<<PD1);
			_delay_ms(3000);
		PORTD|=(1<<PD2);
		_delay_ms(5000);
		PORTD&=~(1<<PD2);
    }
}

