#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates array of int
 * @min: minimum value included
 * @max: maximum value include
 *
 * Description: ordered min to max
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
