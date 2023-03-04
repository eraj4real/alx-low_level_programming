#include "main.h"
/**
 * string_toupper - changes all lowercase letters of  a string to uppercase.
 * @word: Pointer to the string parameter
 * Return: Pointer to uppercase string
 */
char *string_toupper(char *word)
{
	int str_len;

	str_len = 0;

	while (word[str_len] != '\0')
	{
		if (word[str_len] >= 97 && word[str_len] <= 122)
		{
			word[str_len] = word[str_len] - 32;
		}
		str_len++;
	}
	return (word);
}
