#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - string concatination
 * @s1: char s1
 * @s2: char s2
 *
 * Return: NULL if it failes , if true pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, l, a, f;

	int b;

	char *s3;

	b = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; ++i)
		;
	for (l = 0; s2[l] != '\0'; ++l)
		;
	f = i + l;
	s3 = malloc(sizeof(char) * f + 1);

	if (s3 == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; ++a)
		s3[a] = s1[a];

	while (s2[b] != '\0')
	{

		s3[a] = s2[b];
		++b;
		++a;
	}

	s3[a + 1] = '\0';

	return (s3);
}
