#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc == 3)
	{
		num = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
