#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: character s1
 * @s2: character s2
 * @n: unsigned int
 *
 * Return: NULL if false, pointer if true
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int i, j;

	for (i = 0; s1[i] != '\0'; ++i)
		;
	for (j = 0; s2[j] != '\0'; ++j)
		;

	if (n >= j)
		n = j;

	p = malloc(sizeof(char) * (i + n + 1));

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; ++i)
		p[i] = s1[i];

	for (j = 0; j < n; ++j)
	{
		p[i] = s2[j];
		++i;
	}

	p[i + 1] = '\0';

	return (p);
}
