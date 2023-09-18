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
	int longi = s;
	int o;

	while (*s != '\0')

	{
		longi++;
		s++;
	}
	s--;
	for (0 = longi; 0 > s; 0--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
