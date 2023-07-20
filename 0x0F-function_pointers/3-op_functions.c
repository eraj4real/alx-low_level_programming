#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds and returns sum of two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns difference of two ints
 * @a: First number
 * @b: Second number.
 *
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies and returns the product of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides and returns the division of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Perfoms mod/remainder division on two numbers and returns result
 * @a: First number
 * @b: Second number
 *
 * Return: Mod/remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
