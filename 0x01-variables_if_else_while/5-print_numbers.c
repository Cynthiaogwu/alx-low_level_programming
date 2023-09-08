#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num = '0';

while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');

return (0);
}
