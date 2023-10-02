/**
 * _islower - check if char is lowercase
 * @c: if the char is to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
