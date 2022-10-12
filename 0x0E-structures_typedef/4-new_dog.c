#include "dog.h"
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL if it falls, if true pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	dog_t *d;

	d = malloc(sizeof(dog_t));
	for (i = 0; name[i] != '\0'; ++i)
		;
	for (j = 0; owner[i] != '\0'; ++j)
		;
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * i + 1);

	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * j + 1);

	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; ++i)
	{
		d->name[i] = name[i];
	}

	for (j = 0; owner[j] != '\0'; ++j)
	{
		d->owner[j] = owner[j];
	}

	d->age = age;
	return (d);
}
