#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String
 * Return: A pointer to the modified input
 */
char *string_toupper(char *str)
{
	int star;

	for (star = 0; str[star] != '\0'; star++)
	{
		if (str[star] >= 'a' && str[star] <= 'z')
			str[star] = str[star] - 32;
	}

	return (str);
}
