#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: String to be changed.
 * Return: the pointer encoded string.
 */

char *leet(char *s)
{
	int counter = 0;
	int i;

	/* The ascii equivalent of the lower case characters */
	int lower_case[] = {97, 101, 111, 116, 108};

	/* The ascii equivalent of the upper case characters */
	int upper_case[] = {65, 69, 79, 84, 76};

	/* The ascii equivalent of selected numbers */
	int numbers[] = {52, 51, 48, 55, 49};


	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + counter) == lower_case[i] || *(s + counter) == upper_case[i])
			{
				*(s + counter) = numbers[i];
				break;
			}
		}
		counter++;
	}

	return (s);
}
