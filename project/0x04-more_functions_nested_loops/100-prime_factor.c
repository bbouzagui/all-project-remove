#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}

	printf("%ld\n", n);

	return (0);
}
