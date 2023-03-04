#include <stdio.h>
#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int str_len, i;

	str_len = 0;

	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	for (i = 0; src[i] != '\0'; i++, str_len++)
	{
		dest[str_len] = src[i];
	}

	dest[str_len] = '\0';
	return (dest);
}
