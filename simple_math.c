/**	\file simple_math.h
		\brief definition of the function
		\author Alessia Marchese
*/

#include "simple_math.h"

cx_float_t cx_mean (cx_int_t a, cx_int_t b)
{
	cx_float_t average;
	
	average.re = mean(a.re, b.re); //(a.re + b.re) / 2
	average.imm = mean(a.imm, b.imm); //(a.imm + b.imm) / 2
	
	return average;
}

float mean(int a, int b) // definizione della funzione
{
    return(a + b) / 2.0;
}

int max(int a, int b)
{
	if (a > b)
		return a;
	return b;
}