#include <stdio.h>

/**
 * main - Enter point.
 *
 * @argc: Number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
