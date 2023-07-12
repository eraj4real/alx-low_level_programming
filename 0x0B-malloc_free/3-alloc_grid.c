#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2dim array of integers after
 * setting each element initalized to 0
 * @width: width of the 2 dimensional array.
 * @height: height of the 2 dimensional array.
 * Return: NULL if width <= 0, height <= 0, or if function fails
 * if not a pointer to the 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **_2D;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2D = malloc(sizeof(int *) * height);

	if (_2D == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		_2D[h_index] = malloc(sizeof(int) * width);

		if (_2D[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(_2D[h_index]);

			free(_2D);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			_2D[h_index][w_index] = 0;
	}

	return (_2D);
}
