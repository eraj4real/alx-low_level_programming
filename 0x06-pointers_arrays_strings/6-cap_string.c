#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be changed to capital.
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	int position = 0;

	while (str[position])
	{
		while (!(str[position] >= 'a' && str[position] <= 'z'))
			position++;

		if (str[position - 1] == ' ' ||
		    str[position - 1] == '\t' ||
		    str[position - 1] == '\n' ||
		    str[position - 1] == ',' ||
		    str[position - 1] == ';' ||
		    str[position - 1] == '.' ||
		    str[position - 1] == '!' ||
		    str[position - 1] == '?' ||
		    str[position - 1] == '"' ||
		    str[position - 1] == '(' ||
		    str[position - 1] == ')' ||
		    str[position - 1] == '{' ||
		    str[position - 1] == '}' ||
		    position == 0)
			str[position] -= 32;

		position++;
	}

	return (str);
}
