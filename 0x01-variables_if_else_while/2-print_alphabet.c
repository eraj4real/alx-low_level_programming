#include <stdio.h>

/**
 * main - Contains code that prints alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
	char harf;

	for (harf = 'a'; harf <= 'z'; harf++)
	{
	putchar(harf);
	}
	putchar('\n');
	return (0);
}
