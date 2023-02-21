#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if variable is +ve -ve or 0
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d\n is positive", n);
	} else if (n == 0)
	{
		printf("%d\n is zero", n);
	} else
	{
		printf("%d\n is negative", n);
	}

	return (0);
}
