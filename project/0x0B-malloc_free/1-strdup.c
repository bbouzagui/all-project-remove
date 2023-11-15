#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: poinet to newly allocated duplicated string, NULL if failed
 */
char *_strdup(char *str)
{
	char *ptr;
	int sum, a = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (sum = 0; str[sum]; sum++)
	{
		continue;
	}

	ptr = malloc(sizeof(char) * (sum + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (a < sum)
	{
		*(ptr + a) = *(str + a);
		a++;
	}

	*(ptr + a) = '\0';
	return (ptr);
}
