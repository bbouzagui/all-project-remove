#include "main.h"

/**
 * _strlen_recursion - the length of a string.
 *
 * @s: string to be printed
 *
 * Return: string of length.
 */
int _strlen_recursion(char *s)
{
	int index = 0;

	if (*s > 0)
	{
		index++;
		index += _strlen_recursion(s + 1);
	}
	return (index);
}

