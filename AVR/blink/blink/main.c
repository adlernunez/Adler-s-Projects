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
	DDRB=0b00010000;
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0b00010000;//set at B5, is high
		_delay_ms(3000);
		PORTB=0b00010000;// set at B5, is low
		_delay_ms(3000);
    }
}

