#include <stdio.h>
#include <stdlib.h>

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
	int num;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", num);
	}
	return (0);
}
