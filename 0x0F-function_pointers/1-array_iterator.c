#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array memory location
 * on a new line
 * @array: array
 * @size: number of memory locaationsthat will be  printed
 * @action: whether to print in hex or not
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
