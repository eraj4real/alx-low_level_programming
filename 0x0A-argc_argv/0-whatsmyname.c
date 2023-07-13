#include "main.h"

/**
 * main - main function
 * @argc: The character to print
 * @argv: Array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
