/*
 * DC MOTOR.c
 *
 * Created: 19-11-2025 10:31:23
 * Author : adler
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD= 0b00000011;
    while (1) 
    {
	 PORTD|=(1<<PD0);	//FORWARD
	 PORTD&=~(1<<PD1);
	 
	 _delay_ms(3000);
	 
	 PORTD&=~(1<<PD0); //STOP
	 
	 _delay_ms(3000);
	 
	 PORTD|=(1<<PD1); //BACKWARD
	 PORTD&=~(1<<PD0);
	 
	 _delay_ms(3000);
	 
	 PORTD&=~(1<<PD0); //STOP
	 
	 _delay_ms(3000);
    }
}

