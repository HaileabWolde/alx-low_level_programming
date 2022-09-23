#include "main.h"

/**
 * _strcmp - start comparing
 * @s1: set one
 * @s2: set two
 *
 * Description: startes compares two strings
 * Return: 15 if poistive, 0 if it is equal
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; ++i)
		;
	for (j = 0; *(s2 + j) != '\0'; ++j)
		;

	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	else
		return (0);
}
