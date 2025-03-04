/**	\file simple_math.h
		\brief a toy example of math library
		\author Alessia Marchese
*/

//direttive del preprocessore:
#ifndef _SIMPLEMATH_  //se questo simbolo non e' mai stato definito
#define _SIMPLEMATH_  //allora definisci _SIMPLEMATH_

typedef struct complex_int //struct per gestire numeri complessi con variabile intera
{
	int re;
	int imm;
} cx_int_t;

typedef struct complex_float //struct per gestire numeri complessi con variabile fp
{
	float re;
	float imm;
} cx_float_t;

float mean (int a, int b); //restituisce la media dei due parametri
cx_float_t cx_mean (cx_int_t a, cx_int_t b);

int max(int a, int b); //restituisce il maggiore tra i due parametri

#endif