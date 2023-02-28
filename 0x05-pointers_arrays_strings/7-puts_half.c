#include "main.h"

/**
* puts_half - prints half a string
* @str: our input
*/
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -- (len / 2);
	while
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
