#include "main.h"
/**
 * _memset - fills the first n bytes of a memory area
 * @s: starting address block of the memory
 * @b: the desired value place in all array/mem location
 * @n: number of bytes you want to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
