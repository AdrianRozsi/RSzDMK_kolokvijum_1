/*
 * pin1.h
 *
 *  Created on: May 16, 2021
 *      Author: Adrian
 */


#ifndef PIN1_H_
#define PIN1_H_
#include <avr/io.h>
#include <stdint.h>
/// Makro za podesavanje visoke vrednosti signala na pinu
#define HIGH 1
/// Makro za podesavanje niske vrednosti signala na pinu
#define LOW 0
/// Makro za podesavanje izlaznog smera pina
#define OUTPUT 1
/// Makro za podesavanje ulaznog smera pina
#define INPUT 0
/// Makro za selektovanje porta B
#define PORT_B 0
/// Makro za selektovanje porta C
#define PORT_C 1
/// Makro za selektovanje porta D
#define PORT_D 2
/**
* pinSetValue - Funkcija koja postavlja vrednost na pinu
* @param port - ulaz tipa unsigned char - Port na kojem je pin ciju vrednost
potrebno postaviti
* @param pin - ulaz tipa unsigned char - Pin ciju je vrednost potrebno
postaviti
* @param value - ulaz tipa unsigned char - Vrednost koju je potrebno
postaviti na pin
* @return Nema povratnu vrednost
*/
void pinSetValue(uint8_t port, uint8_t pin, uint8_t value);
/**
* pinInit - Funkcija koja implementiran inicijalizaciju pina
* @param port - ulaz tipa unsigned char - Port na kojem je pin koji je
potrebno inicijalizovati
* @param pin - ulaz tipa unsigned char - Pin koji je potrebno
inicijalizovatiRazvoj softvera za digitalne mikrokontrolere
* @param direction - ulaz tipa unsigned char - Smer prema kojem je potrebno
inicijalizovati pin
* @return Nema povratnu vrednost
*/
void pinInit(uint8_t port, uint8_t pin, uint8_t direction);
#endif /* PIN_H_ */
