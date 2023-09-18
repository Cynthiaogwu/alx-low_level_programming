#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: the string input to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
