/**
 * _islower - check if char is lowercase
 * @c: if the char is to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
