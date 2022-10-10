#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog
 * @name: name
 * @age: age
 * @owner: char
 *
 * Return: nothing
 */

typedef struct dog
{
	char *name;

	float age;

	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
