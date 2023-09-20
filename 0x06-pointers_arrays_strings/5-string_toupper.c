#include "main.h"
/**
 * string_toupper - converts a string to upper case
 *
 * @str: the string input to be converted
 *
 * Return: modified string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
