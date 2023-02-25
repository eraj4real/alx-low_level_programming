#include "main.h"

/**
 * print_line - prints a list of numbers 0 to 9 using a for loop
 * @n: An integer that determines the number of lines that will be printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <=n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
