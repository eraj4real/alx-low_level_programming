#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer supplied as parameter.
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		nummber = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
