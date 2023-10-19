#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters from s2 to concatenate
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int num = n, b;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (b = 0; s1[b]; b++)
		num++;

	p = malloc(sizeof(char) * (num + 1));

	if (p == NULL)
		return (NULL);

	num = 0;

	for (b = 0; s1[b]; b++)
		p[num++] = s1[b];

	for (b = 0; s2[b] && b < n; b++)
		p[num++] = s2[b];

	p[num] = '\0';

	return (p);
}
