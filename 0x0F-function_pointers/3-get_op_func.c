#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function based on
 * users's choice
 * @s: Operator passed as argument
 *
 * Return: Pointer to the function that matches the parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
