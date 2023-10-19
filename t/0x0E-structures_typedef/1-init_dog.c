#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: The first structure
 * @name: The second structure
 * @age: The third tructure
 * @owner: The four structure
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
