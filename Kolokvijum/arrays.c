/*
 * arrays.c
 *
 *  Created on: 16.05.2021.
 *      Author: elena
 */

#ifndef ARRAYS_C_
#define ARRAYS_C_


#include "arrays.h"

int16_t Element(int16_t first_element, int16_t difference, int16_t n)
{
	return (first_element + (n - 1) * difference);
}

int16_t Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode)
{
	int16_t sum = 0;

	if(mode == ITERATIVE)
	{
		sum += first_element;
		for(int8_t i = 2; i < n; i++)
		{
			sum += Element(first_element, difference, i);
		}
	}

	else if(mode == FORMULA)
	{
		sum = n*(first_element + Element(first_element, difference, n))/2;
	}

	else //pogresan unos
		sum = 0;

	return sum;
}


#endif /* ARRAYS_C_ */
