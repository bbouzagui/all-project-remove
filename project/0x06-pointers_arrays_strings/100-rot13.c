#include "main.h"

/**
 * rot13 - Encodes a string in rot13
 * @str: type array pointer
 * Return: The resulting string
 */
char *rot13(char *str)
{
	int i, x;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x < 54; x++)
		{
			if (((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A'))
			&& str[i] == input[x])
			{
				str[i] = output[x];
				break;
			}
		}
	}
	return (str);
}
