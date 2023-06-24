#include "main.h"

/**
 * print_most_numbers - prints a list of numbers 0 to 9 using a for loop
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 4 || i != 2)
	{
	_putchar(i + '0');
	}
	continue;
	}
	_putchar('\n');
}
