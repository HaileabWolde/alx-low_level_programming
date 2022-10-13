#include "function_pointers.h"

/**
 * print_name - it is a function that prints a name
 * @name: pointer whihch holds an address of char
 * @f: pointer of  a function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
