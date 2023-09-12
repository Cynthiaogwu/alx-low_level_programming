#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * 
 * Description: we are using _putchar
 *
 * @c the character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
