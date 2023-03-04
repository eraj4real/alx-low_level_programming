#include "main.h"
/**
 * rot13 - encodes a string using rot13. Simple encrytion
 * @s: Pointer to string to be enoded
 * Return: pointer to encode the source string.
 */

char *rot13(char *s)
{
	int counter = 0, i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + counter) != '\0')
	{

		/* 52 is the length of the sum of arrays char and alphabets */
		for (i = 0; i < 52; i++)
		{
			if (*(s + counter) == alphabets[i])
			{
				*(s + counter) = rot13[i];
				break;
			}
		}
		counter++;
	}

	return (s);
}
