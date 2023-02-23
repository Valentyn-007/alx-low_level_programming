#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - main entry point of program
 *
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
	{
	int i = 0;
	char c;

	while(i<11)
	{
	for (c = 'a'; c <= 'z'; c++)

		{
		_putchar(c);
		}
	i++;
	}
	_putchar('\n');
	
	}
