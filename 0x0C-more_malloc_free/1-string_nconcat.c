#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: leading string
 * @s2: trailing string
 * @n: n bytes from s2 to add to s1
 *
 * Return: pointer to newly allocated string space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, lenA = 0, lenB = 0;

	while (s1 != 0 && s1[lenA] != 0)
		lenA++;

	while (s2 != 0 && s2[lenB] != 0)
		lenB++;

	if (n < lenB)
		s = malloc(sizeof(char) * (lenA + n + 1));
	else
		s = malloc(sizeof(char) * (lenA + lenB + 1));

	if (s == 0)
		return (NULL);

	while (i < lenA)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lenB && i < (lenA + n))
		s[i++] = s2[j++];

	while (n >= lenB && i < (lenA + lenB))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
