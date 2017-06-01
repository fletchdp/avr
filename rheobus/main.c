/*
 * main.c
 *
 *  Created on: May 22, 2017
 *      Author: fletch
 */

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRB |= 1<<PB0;
	while(1) {
		PORTB &= ~(1<<PB0); /* LED on */
		_delay_ms(100);
		PORTB |= 1<<PB0; /* LED off */
		_delay_ms(900);
	}
	return 0;
}
