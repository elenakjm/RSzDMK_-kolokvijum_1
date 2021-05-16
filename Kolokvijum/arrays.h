/*
 * arrays.h
 *
 *  Created on: 16.05.2021.
 *      Author: elena
 */

#include<stdint.h>

#ifndef ARRAYS_H_
#define ARRAYS_H_


#define ITERATIVE 1
#define FORMULA 2

/**
 * Funkcija Element izra�unava vrednost n-tog �lana aritmeti�kog niza opisanog pomo�u po�etne vrednosti niza i razlike.
 * @return vrednost n-tog �lana aritmeti�kog niza
 */
int16_t Element(int16_t first_element, int16_t difference, int16_t n);


/**
 * Opis: Funkcija Sum izra�unava sumu prvih n �lanova aritmeti�kog niza
*opisanog pomo�u po�etne vrednosti niza i razlike, na osnovu parametra mode.
*Ukoliko mode ima vrednost ITERATIVE, vrednost sume je potrebno odrediti
*iteratitvno (sumom svih elemenata do n-tog), dok u slu�aju vrednosti
*FORMULA, potrebno je odrediti sumu po odgovaraju�oj formuli. ITERATIVE
*i FORMULA su vrednosti definisane pomo�u makro konstante.
*@return Vrednost sume prvih n �lanova aritmeti�kog niza
 */
int16_t Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode);

//po zadatku pise da je funkcija void, ali pise i da ima povratnu vrednost
//pa sam je prebacila na int16_t


#endif /* ARRAYS_H_ */
