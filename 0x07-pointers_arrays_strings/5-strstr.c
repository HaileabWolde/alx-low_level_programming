#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer haystack
 * @needle: pointer needle
 *
 * Description: it locates s2 in s1
 * Return: if true haystack if false zero
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; ++i)
	{
		for (j = 0; haystack[j] != '\0'; ++j)
		{
			if (needle[i] == haystack[j])
				return (haystack + j);
		}
	}
	return (0);
}
