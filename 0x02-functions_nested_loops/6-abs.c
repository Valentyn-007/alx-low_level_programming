#include <stdio.h>
#include "main.h"

/**
 * _abs - main entry point
 *
 * @n: - parameter of the _abs function
 *
 * Return: 0 if successful
 */
int _abs(int n)
	{
	if (n < 0)
		{
		return (-n);
		}
	else
		{
		return (n);
		}
	}
