#include "main.h"

/**
 * create_array - Create an array of chars, and initializes it with a spehar
 * @size: array size.
 * @c: char
 * Description: create an array of chars, and initiate it with a specific char
 * Return: the pointer to array or return NULL ifit fails.
 */
char *create_array(unsigned int size, char c)
{
	char *stri;
	unsigned int i;

	stri = malloc(sizeof(char) * size);
	if (size == 0 || stri == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		stri[i] = c;
	return (stri);
}
