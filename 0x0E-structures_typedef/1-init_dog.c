#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog
 * @d: struct dog
 * @name: character name
 * @age: float age
 * @owner: pointer owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;

	d->age = age;

	d->owner = owner;
	}
}
