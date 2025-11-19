/*
 * blink with function.c
 *
 * Created: 17-11-2025 09:10:01
 * Author : adler
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
void cw();
void ccw();
void stp();

int main(void)
{
    DDRD =0b00001111; //declared 4 pins PD0, PD1, PD2, PD3.
	cw();			// calling function clock wise
	_delay_ms(5000);
	ccw();			// calling function counter clock wise
	_delay_ms(5000);
	stp();			// calling function stop, all leds turns ON before stop!
	_delay_ms(3000);
}

void cw()
{
	PORTD |= (1<<PD0);  //PD 0 ON
	_delay_ms(500);
		PORTD &=~(1<<PD0);//PD 0 OFF
		_delay_ms(500);
	PORTD |= (1<<PD1);//PD 1 ON
	_delay_ms(500);
		PORTD &=~(1<<PD1);//PD 1 OFF
		_delay_ms(500);	
	PORTD |= (1<<PD2);//PD 2 ON
	_delay_ms(500);
		PORTD &=~(1<<PD2);//PD 2 OFF
		_delay_ms(500);
	PORTD |= (1<<PD3);//PD 3 ON
	_delay_ms(500);
		PORTD &=~(1<<PD3);//PD 3 OFF
		_delay_ms(500);
	
}

void ccw()
{
	PORTD |= (1<<PD3);  //PD 3 ON
	_delay_ms(500);
					PORTD &=~(1<<PD3);//PD 3 OFF
					_delay_ms(500);
	PORTD |= (1<<PD2);//PD 2 ON
	_delay_ms(500);
					PORTD &=~(1<<PD2);//PD2 OFF
					_delay_ms(500);	
	PORTD |= (1<<PD1);//PD 1 ON
	_delay_ms(500);
					PORTD &=~(1<<PD1);//PD 1 OFF
					_delay_ms(500);
	PORTD |= (1<<PD0);//PD 0 ON
	_delay_ms(500);
					PORTD &=~(1<<PD0);//PD 0 OFF
					_delay_ms(500);
}

void stp()
	{	// All LEDs turn ON before stop
		PORTD |= (1<<PD0);//PD 0 ON 
		PORTD |= (1<<PD1);//PD 1 ON
		PORTD |= (1<<PD2);//PD 2 ON
		PORTD |= (1<<PD3);//PD 3 ON
		
		_delay_ms(500);
		
		PORTD &=~(1<<PD0);//PD 0 OFF
		PORTD &=~(1<<PD1);//PD 1 OFF
		PORTD &=~(1<<PD2);//PD 2 OFF
		PORTD &=~(1<<PD3);//PD 3 OFF
	
	
}