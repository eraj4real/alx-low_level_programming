#include "main.h"

/**
 * _isalpha - Check for alphanumeric character
 *  Return 1 if c is a letter, lowercase or uppercase
 * @c: int value in ASCIItable
 * Return: 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
