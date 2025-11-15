/*
 * blink.c
 *
 * Created: 15-11-2025 18:41:16
 * Author : adler
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD=0b00000100;
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0b00000100;
		_delay_ms(3000);
		PORTD=0b00000000;
		_delay_ms(3000);
    }
}

