#include "main.h"
#include <stdlib.h>

/**
 * str_concat - uses malloc toconcatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concated string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + b + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}

	return (a);
}
