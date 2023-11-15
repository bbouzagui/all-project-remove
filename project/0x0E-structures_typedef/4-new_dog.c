#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, a, b;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	dog->name = malloc((i + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (b = 0; b < i; b++)
		dog->name[b] = name[b];
	dog->name[b] = '\0';

	dog->age = age;
	for (a = 0; owner[a]; a++)
		;
	dog->owner = malloc((a + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (b = 0; b < a; b++)
		dog->owner[b] = owner[b];
	dog->owner[b] = '\0';
	return (dog);
}
