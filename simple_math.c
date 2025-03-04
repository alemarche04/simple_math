/**	\file simple_math.h
		\brief definition of the function
		\author Alessia Marchese
*/

#include "simple_math.h"

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