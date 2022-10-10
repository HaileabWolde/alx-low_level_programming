#include "dog.h"
#include <stdio.h>

/**
 * print_dog - it prints a struct dog
 * @d: pointer d
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nill)\n");

	if (d->owner == NULL)
		printf("(nill)\n");

	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
