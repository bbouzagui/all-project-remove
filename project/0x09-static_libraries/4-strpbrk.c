#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing characters
 * Return: Pointer to the first matching character in 's', or NULL
 * if none found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, v;
	char *pointer;

	i = 0;
	while (s[i] != '\0')
	{
		v = 0;
		while (accept[v] != '\0')
		{
			if (accept[v] == s[i])
			{
				pointer = &s[i];
				return (pointer);
			}
			v++;
		}
		i++;
	}

	return (0);
}
