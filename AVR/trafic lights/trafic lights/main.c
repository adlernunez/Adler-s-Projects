/*
 * trafic lights.c
 *
 * Created: 20-11-2025 09:38:11
 * Author : adler
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void YELLOW();
void RED();
void GREEN();

int main(void)
{
    DDRB = 0b00000111;
	
    while (1) 
    {
		 YELLOW();
		 RED();
		 
		 YELLOW();
		 GREEN();
		 
    }
}

void YELLOW(){
	PORTB|=(1<<PB0);
	_delay_ms(3000);
	PORTB&=~(1<<PB0);
	_delay_ms(500);
}

void RED()
{
	PORTB|=(1<<PB1);
	_delay_ms(5000);
	PORTB&=~(1<<PB1);
	_delay_ms(500);
}

void GREEN()
{
	PORTB|=(1<<PB2);
	_delay_ms(6000);
	PORTB&=~(1<<PB2);
	_delay_ms(500);
}