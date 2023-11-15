#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints name, age and owner if not null.
 * @d: is pointer to the struct dog.
 *
 * Return: noting
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);

		if (!(d->owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
