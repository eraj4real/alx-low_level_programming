#include <stdio.h>

/**
 * print_square - prints a list of numbers 0 to 9 using a for loop
 * An integer that determines the number of lines that will be printed
 * Return: nothing
 */

void fizz_buzz()
{
	int i;

	for(i = 1; i <=100; i++)
	{
		if (i%3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
	}
}
