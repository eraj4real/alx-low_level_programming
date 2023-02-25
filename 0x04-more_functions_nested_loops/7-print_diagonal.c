
#include "main.h"

/**
 * print_diagonal - prints a list of numbers 0 to 9 using a for loop
 * @n: An integer that determines the number of lines that will be printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 1; i <= n; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
