#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppers case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 'a';
char upper = 'A';

while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
