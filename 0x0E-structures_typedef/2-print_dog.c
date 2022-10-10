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
	if (d == NULL) /* validate if d initiated correctly */
		return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
}
