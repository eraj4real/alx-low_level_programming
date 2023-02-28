#include <stdio.h>
#include "main.h"

/**
 * * _puts - function that prints a string, followed by a new line
 * which is printed to the standard output except the nulcharacter in strings
 * * @str: string pointer
 */

void _puts(char *str)
{
	int i = 0;

	/* While characterin string is not the null character */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		 i++;
	}

	_putchar('\n');
}
