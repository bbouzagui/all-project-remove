#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: string
 * Return: The length of a string
 */
size_t _strlen(const char *str)
{
	int longi = 0;

	while (*str++)
		longi++;
	return (longi);
}
