
#include "main.h"

/**
 * print_diagonal - prints a list of numbers 0 to 9 using a for loop
 * @n: An integer that determines the number of lines that will be printed
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
		}
	
		_putchar('\n');
	}
}
