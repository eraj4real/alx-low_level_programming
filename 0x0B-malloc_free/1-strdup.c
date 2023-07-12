#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to duplicates a string using malloc
 * @str: string to duplicate
 * Return: Pointer to new duplicated string
 */

char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
		return (NULL);

	for (int i = 0; str[i] != '\0'; i++)
	{
		a = malloc(i * sizeof(*a) + 1);
		if (a == NULL)
			return (NULL);
		for (int b = 0; b < i; b++)
		{
			a[b] = str[b];
			a[b] = '\0';
		}
	}

	return (a);
}
