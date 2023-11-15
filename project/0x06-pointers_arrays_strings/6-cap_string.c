#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 * Return: The result string
 */
char *cap_string(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		if (b == 0 && str[b] >= 'a' && str[b] <= 'z')
		{
			str[b] = str[b] - 32;
		}
		else if (str[b] == ' ' || str[b] == '\t' || str[b] == '\n' ||
			str[b] == ',' || str[b] == ';' || str[b] == '.' ||
			str[b] == '!' || str[b] == '?' || str[b] == '"' ||
			str[b] == '(' || str[b] == ')' || str[b] == '{' ||
			str[b] == '}')
		{
			if (str[b + 1] >= 'a' && str[b + 1] <= 'z')
			{
				str[b + 1] = str[b + 1] - 32;
			}
		}
		b++;
	}

	return (str);
}
