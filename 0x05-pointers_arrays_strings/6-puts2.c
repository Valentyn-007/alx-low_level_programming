#include "main.h"

/**
* puts2 - prints alternting characters
* @str: our input
* Return: print
*/
void puts2(char *str)
{
	int i = 0;

	for (; str[1] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
