#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
	char harf;

	for (harf = 'a'; harf <= 'z'; harf++)
	{
		if (harf != 'q' && harf != 'e')
		{
			putchar(harf);
		}
	}
	putchar('\n');
	return (0);
}
