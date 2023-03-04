#include <stdio.h>
#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes from source string
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str_len, i;

	str_len = 0;

	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, str_len++)
	{
		dest[str_len] = src[i];
	}

	dest[str_len] = '\0';
	return (dest);
}
