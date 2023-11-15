#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2:Second string
 * Return: Difference between the ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	int b;

	b = 0;
	while (s1[b] != '\0' && s2[b] != '\0' && s1[b] == s2[b])
	{
		b++;
	}

	return (s1[b] - s2[b]);
}
