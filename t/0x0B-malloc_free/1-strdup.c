#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: poinet to newly allocated duplicated string, NULL if failed
 */
char *_strdup(char *str)
{
	char *d;
	int sum, a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (sum = 0; str[sum] != '\0'; sum++)
	{
		continue;
	}

	d = malloc(sizeof(char) * (sum + 1));

	if (d == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= sum; a++)
		d[a] = str[a];

	return (d);
}
