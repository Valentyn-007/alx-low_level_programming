#include <stdio.h>
#include "main.h"

/**
 * main - main entry point of program
 * print_alphabet - prints the letters of the alphabet in lowercase
 *
 * Return: 0 if successful
 */

int main(void)
	{
	void print_alphabet(void)
		{
		char c;
		for (c = 'a'; c <= 'z'; c++)
			{
			_putchar(c);
			}
		_putchar('\n');
		}

	return (0);
	}
