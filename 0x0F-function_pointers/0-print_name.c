#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - use a pointer to function to print a name
 * @name: string
 * @f: pointer to function
 * Return: nothing_void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
