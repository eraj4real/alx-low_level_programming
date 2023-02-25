#include "main.h"

/**
 * print_numbers - prints a list of numbers 0 to 9 using a for loop
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
