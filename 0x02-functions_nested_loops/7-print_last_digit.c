#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: param  for fn
 *
 * Return: 0 if successful
 */
int print_last_digit(int n)
	{
	int last_digit = n % 10;

	if (last_digit < 0)
		{
		last_digit = last_digit * -1;
		}

	_putchar(last_digit + '0');

	return (last_digit);
	}
