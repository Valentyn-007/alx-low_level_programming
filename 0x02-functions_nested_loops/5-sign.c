#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for alphabets
 *
 * @n - parameter of the print_sign function
 *
 * Return: 0 if successful
 */
int print_sign(int n)
	{
	if (n > 0)
		{
		putchar('+');
		return (1);
		}
	else if (n == 0)
		{
		putchar('0');
		return (0);
		}
	else
		{
		putchar('-');
		return (-1);
		}
	return (0);
	}
