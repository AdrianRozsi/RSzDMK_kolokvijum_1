/*
 * timer0.c
 *
 *  Created on: May 16, 2021
 *      Author: Adrian
 */


#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
/// Sistemsko vreme
#include "timer0.h"

void timer0InteruptInit()
{
    // Inicijalizacija tajmera 0 tako da perioda prekida bude 1ms
    TCCR0A = 0x02;
    TCCR0B = 0x03;
    OCR0A = 249;
    TIMSK0 = 0x02;

    // Podesavanje globalne dozvole prekida
    sei();
}

/******************************************************************************************/

/**
 * ISR - prekidna rutina tajmera 0 u modu CTC
 */


