#include <stdio.h>
#include "main.h"

/**
 * print_alphbet - main entry point of program
 * 
 *
 * Return: 0 if successful
 */

void print_alphabet(void)
	{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');

	}
