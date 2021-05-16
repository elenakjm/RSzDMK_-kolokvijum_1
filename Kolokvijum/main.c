/**
 * @file main.c
 *
 *  Created on: 16.05.2021.
 *      Author: elena
 */

#include "../usart/usart.h"
#include "../timer0/timer0.h"
#include "pin.h"
#include "arrays.h"
#include <avr/pgmspace.h>
#include<avr/io.h>

int main()
{
	usartInit(9600);
	timer0InteruptInit();
	pinInit(PORT_B, DIODE_PIN, OUTPUT);
	int16_t prvi, razlika, redni_br, suma = 0;
	char pom[64];

	while(1)
	{
		usartPutString_P(PSTR("Unesite prvi element: \r\n"));
		while(!usartAvailable());
		timer0DelayMs(100);

		prvi = usartParseInt();

		usartPutString_P(PSTR("Unesite razliku: \r\n"));
		while(!usartAvailable());
		timer0DelayMs(100);

		razlika = usartParseInt();

		pinSetValue(PORT_B, DIODE_PIN, HIGH);
		usartPutString_P(PSTR("Unesite n: \r\n"));
		while(!usartAvailable());
		timer0DelayMs(100);

		redni_br = usartParseInt();

		suma = Sum(prvi, razlika, redni_br, ITERATIVE);
		sprintf(pom, "Vrednost n-tog elementa %d, proteklo vreme: broj_ms", Element(prvi, razlika, redni_br));
		usartPutString(pom);

		sprintf(pom, "suma_iter: suma_prvih_n_elemenata %d, proteklo vreme: broj_ms", suma);
		usartPutString(pom);

		suma = Sum(prvi, razlika, redni_br, FORMULA);
		sprintf(pom, "suma_form: suma_prvih_n_elemenata %d, proteklo vreme: broj_ms", suma);
		usartPutString(pom);

	}

	return 0;
}
