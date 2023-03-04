#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number.
 * @n2: second number.
 * @r: buffer.
 * @size_r: buffer size:
 * Return: the pointer to r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int char1 = 0;
	int char2 = 0;
	int addup = 0;
	int op, temp, data11, data12; 

	while (*(n1 + char1) != '\0')
		char1++;
	while (*(n2 + char2) != '\0')
		char2++;
	if (char1 >= char2)
		temp = char1;
	else
		temp = char2;
	if (size_r <= temp + 1)
		return (0);
	r[temp + 1] = '\0';
	char1--, char2--, size_r--;
	data11 = *(n1 + char1) - 48, data12 = *(n2 + char2) - 48;
	while (temp >= 0)
	{
		op = data11 + data12 + addup;
		if (op >= 10)
			addup = op / 10;
		else
			addup = 0;
		if (op > 0)
		*(r + temp) = (op % 10) + 48;
		else
			*(r + temp) = '0';
		if (char1 > 0)
			char1--, data11 = *(n1 + char1) - 48;
		else
			data11 = 0;
		if (char2 > 0)
			char2--, data12 = *(n2 + char2) - 48;
		else
			data12 = 0;
		temp--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
