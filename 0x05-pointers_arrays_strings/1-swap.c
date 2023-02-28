#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first parameter
 * @b: Second parameter
 * @int c: the place holder 
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
