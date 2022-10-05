#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: string
 *
 * Return: Null if false if true pointer
 */

char *_strdup(char *str)
{
	int l, i;

	char *n;

	for (l = 0; str[l] != '\0'; ++l)
		;

	n = malloc(sizeof(char) * l + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		if (n == NULL)
			return (NULL);

		for (i = 0; i < l; ++i)
			n[i] = str[i];
	}
		return (n);
}
