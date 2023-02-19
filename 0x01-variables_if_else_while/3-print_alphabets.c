#include <stdio.h>

/**
 * main - Contains code that prints alphabets in lower case
 * and also in Upper case
 * Return: 0
 */
int main(void)
{
	char harf;
	char upper;

	for (harf = 'a'; harf <= 'z'; harf++)
	{
	putchar(harf);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
	putchar(upper);
	}
	putchar('\n');
	return (0);
}
