#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a the struct variable dog
 * @d: pointer to the struct dog
 * @name: dog.name to initialize
 * @age: dog.age to initialize
 * @owner: dog.owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
