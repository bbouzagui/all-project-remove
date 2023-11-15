#include "main.h"
#include <stdio.h>
/**
 * *_strstr - Searches for the first occurrence of 'needle' in 'haystack'
 * @haystack: The string to search within
 * @needle: The substring to search
 * Return: Pointer to the first occurrence of 'needle' in 'haystack'
 */
char *_strstr(char *haystack, char *needle)
{
	int index, book;

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (book = 0; needle[book] != '\0'; book++)
		{
			if (haystack[index + book] != needle[book])
				break;
		}
		if (!needle[book])
			return (&haystack[index]);
	}
	return (NULL);
}
