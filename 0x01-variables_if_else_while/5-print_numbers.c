#include <stdio.h>

/**
 * main - prints
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
	putchar(i + '0');
	i++;
	}
	putchar('\n');
	return (0);
}
