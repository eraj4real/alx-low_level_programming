#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: int t change to abslute
 *
 * Return absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}
