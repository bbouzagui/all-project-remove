#include <stdio.h>

/**
 * main - Enter point.
 *
 * @argc: Number of argument.
 * @argv: Array of argument.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
