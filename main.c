/*
 * GccApplication10.c
 *
 * Created: 13-May-19 10:43:16 AM
 * Author : JAYASREE
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#define LED_OUTPUT PORTB
#define PIR_INPUT PINC


int main(void)
{
	DDRC=0X00;/*Set the PIR port as input port*/
	DDRB=0XFF;/*Set the LED port as output port*/
    /* Replace with your application code */
    while (1) 
    {
		LED_OUTPUT=PIR_INPUT;//When sensor detecetd LED will be high
    }
}

