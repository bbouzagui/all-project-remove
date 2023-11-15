#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string.
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int num1  = 0, num2 = 0, i;

	if (s1 != NULL)
	{
		while (s1[num1])
			num1++;
	}

	if (s2 != NULL)
	{
		while (s2[num2])
			num2++;
	}

	c = malloc(sizeof(char) * (num1 + num2 + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < num1; i++)
	{
		c[i] = s1[i];
	}

	for (i = 0; i < num2; i++)
	{
		c[num1 + i] = s2[i];
	}

	c[num1 + num2] = '\0';

	return (c);
}
