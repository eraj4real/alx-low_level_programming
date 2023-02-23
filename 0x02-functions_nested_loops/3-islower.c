#include "main.h"

/**
 * _islower - checks for lowercase  character
 * return: 1 id character is lowercase
 * @c: Is the int value to be compared with the ASCII value
 * Return: 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
