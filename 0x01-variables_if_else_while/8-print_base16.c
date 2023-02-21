#include <stdio.h>
/**
 * main - prints
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;

	char hex_digits[] = "0123456789abcdef";

	while (i < 16)
	{
	putchar(hex_digits[i]);
	i++;
	}

	putchar('\n');
	return (0);
}
