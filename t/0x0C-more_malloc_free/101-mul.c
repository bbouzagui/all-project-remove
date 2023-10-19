#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string contains only digits
 * @str: The input string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * string_to_int - Converts a string to an integer
 * @ptr: The input string to convert
 *
 * Return: The integer value of the string
 */
int string_to_int(const char *ptr)
{
	int result = 0;

	while (ptr)
	{
		result = result * 10 + (*ptr - '0');
		ptr++;
	}
	return (result);
}

/**
 * main - Multiplies two positive numbers and prints the result
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int a, b, mul = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				exit(98);
			}
											}
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);
	return (0);
}
