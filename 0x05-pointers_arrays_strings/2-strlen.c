#include <stdio.h>
#include "main.h"

/**
* _strlen - a function that print the length of a string to the stdout
* @s: pointer to string
* Return: int to indicate success
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
