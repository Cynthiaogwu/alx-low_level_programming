#include <stdio.h>
/**
 * main - Prints the numbers from 0 to 9 and letters between a.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char numbers = '0';
char letters = 'a';

while (numbers <= '9')
{
putchar(numbers);
numbers++;
}
while (letters <= 'f')
{
putchar(letters);
letters++;
}
putchar('\n');

return (0);
}
