#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 * for an Amount of money.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0, 1
 *
 */
int main(int argc, char **argv)
{
	int sum, a, r;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]);
	r = 0;

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && sum >= 0; a++)
	{
		while (sum >= coins[a])
		{
			r++;
			sum -= coins[a];
		}
	}

	printf("%d\n", r);
	return (0);
}
