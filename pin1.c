/*
 * pin1.c
 *
 *  Created on: May 16, 2021
 *      Author: Adrian
 */


#include "pin1.h"
#include <util/delay.h>
#include <stdint.h>
#include <stdlib.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>

#include "pin1.h"
void pinSetValue(uint8_t port, uint8_t pin, uint8_t value)
{
// Postavljanje vrednosti pina
switch(port)
{
case PORT_B:
if (value == HIGH)
PORTB |= 1 << pin;
else
PORTB &= ~(1 << pin);
break;
case PORT_C:
if (value == HIGH)
PORTC |= 1 << pin;
else
PORTC &= ~(1 << pin);
break;
case PORT_D:
if (value == HIGH)
PORTD |= 1 << pin;
else
PORTD &= ~(1 << pin);
break;
default:
break;
}
}
/****************************************************************************
**************/
void pinInit(uint8_t port, uint8_t pin, uint8_t direction)
{
// Inicijalizacija smera pina
switch (port)
{
case PORT_B:
if (direction == OUTPUT)
DDRB |= 1 << pin;
else
DDRB &= ~(1 << pin);
break;
case PORT_C:
if (direction == OUTPUT)
DDRC |= 1 << pin;
else
DDRC &= ~(1 << pin);
break;
case PORT_D:
if (direction == OUTPUT)
DDRD |= 1 << pin;
else
DDRD &= ~(1 << pin);
break;
default:
break;
}
}
