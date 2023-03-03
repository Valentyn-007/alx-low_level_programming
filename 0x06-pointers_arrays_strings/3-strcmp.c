#include "main.h"
/**
 *_strcmp - compares two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *
 *Return: value less than 0 if the string is less than the other.
 *value greater than 0 if the string is greater than the other.
 *0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int countr, cmpVal;

	countr = 0;
	while (s1[countr] == s2[countr] && s1[countr] != '\0')
	{
		countr++;
	}

	cmpVal = s1[countr] - s2[countr];
	return (cmpVal);
}
