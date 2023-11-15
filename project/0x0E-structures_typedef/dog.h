#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct dog
 * @name: The first element
 * @age: The second element
 * @owner: The third element
 *
 * Description: header file
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
