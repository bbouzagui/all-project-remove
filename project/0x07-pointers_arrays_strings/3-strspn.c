#include "main.h"

/**
 * *_strspn - Calculates the length of the initial segment of 's'
 * @s: The string to search
 * @accept: The string containing allowed characters
 * Return: Length of the initial segment of 's' consisting only of characters
 * in 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, index;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		index = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				index = 1;
			}
		}
		if (index == 0)
		{
			return (c);
		}
	}

	return (0);
}
