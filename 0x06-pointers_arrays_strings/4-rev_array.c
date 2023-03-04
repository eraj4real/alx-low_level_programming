#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: Pointer to array
 * @n: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int swap, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		swap = a[counter];
		a[counter++] = a[n];
		a[n--] = swap;
	}
}
