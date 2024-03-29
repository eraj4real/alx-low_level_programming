#include "function_pointers.h"
/**
 * int_index - returns index location baseed on a boolean. -1 means false
 * @array: array
 * @size: size of array's elements
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
