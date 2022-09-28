#include "main.h"

/**
 * _strchr - comparing a stirng in a pointer
 * @s: string
 * @c: character c
 *
 * Description: it locates a character in a string
 * Return: c if ture, null if false
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
