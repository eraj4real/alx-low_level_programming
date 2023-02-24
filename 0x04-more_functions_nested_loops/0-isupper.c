#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check whether inputed characted is in uppercase.
 *@c: the integer value to be tested
 * Return: 1 if it is uppercase  nd 0 if it is lowercase
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
