#include <stdio.h>

/**
 * main - prints
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	char c;

	for (i = 0; i < 10; i++)
	{
	c = i + '0';
	putchar(c);
	}

	putchar('\n');

	return (0);

}
