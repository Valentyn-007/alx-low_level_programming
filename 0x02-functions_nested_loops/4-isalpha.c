#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: parameter of the _isalpha function
 *
 * Return: 0 if successful
 */
int _isalpha(int c)
	{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
