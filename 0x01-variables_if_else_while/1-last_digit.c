#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - The main function prints a number in comparison
 * to the number 5 using modular arithmethic
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %i is %i and is ", n, last_digit);
	if (last_digit > 5)
		printf("greater than 5\n");
	else if (lastDigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n")
	return (0);
}
