#include <stdio.h>

/**
 * main - prints
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'a';

	// print lowercase alphabet
	while (c <= 'z')
	{
	putchar(c);
	c++;
	}

	c = 'A';

	// print uppercase alphabet
	while (c <= 'Z')
	{
	putchar(c);
	c++;
	}
    
	putchar('\n');
	return (0);
}
