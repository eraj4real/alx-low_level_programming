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
	int i, b;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		a[b] = str[b];
	return (a);
}
