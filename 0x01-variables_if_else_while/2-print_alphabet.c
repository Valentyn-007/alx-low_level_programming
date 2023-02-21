#include <stdio.h>

/**
 * main - prints
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');

	return (0);
}
