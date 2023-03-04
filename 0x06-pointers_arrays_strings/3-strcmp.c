#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: Initial string
 * @s2: String for comparison
 * Return: O if both strings are equal, negative if second string is longer
 * positive (greater than 0) if first string is longer
 */

int _strcmp(char *s1, char *s2)
{
	int each, comparison;

	each = 0;

	while (s1[each] == s2[each] && s1[each] != '\0')
	{
		each++;
	}

	comparison = s1[each] - s2[each];
	return (comparison);
}
