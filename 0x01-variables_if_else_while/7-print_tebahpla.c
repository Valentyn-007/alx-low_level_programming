#include <stdio.h>

/**
 * main - prints
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
	putchar(c);
	c--;
	}

	putchar('\n');
	return (0);
}
