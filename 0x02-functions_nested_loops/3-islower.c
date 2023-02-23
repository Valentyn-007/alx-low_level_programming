#include <stdio.h>
#include "main.h"

/**
 * _islower - main access point into program
 *
 * @c: parameter for the _islower function, type int
 *
 * Return: 0 if successful
 */
int _islower(int c)
	{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
