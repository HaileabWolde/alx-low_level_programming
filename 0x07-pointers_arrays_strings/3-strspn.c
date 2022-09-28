#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: pointer s
 * @accept: pointer accept
 *
 * Description: it takes n bytes of accept then length of the prefix
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	char i, j, n;

	n = 0;

	j = 0;

	for (i = 0; *(accept + i) != '\0'; ++i)
	{
		for (j = 0; *(s + j) != ','; ++j)
		{
			if (*(accept + i) == *(s + j))
			{
				n++;
				break;
			}
		}
	}
	return (n + 1);
}
