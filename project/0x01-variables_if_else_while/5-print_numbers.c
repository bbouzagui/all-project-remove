#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers
 *
 * Return: Always  0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%i", n);
	}
	printf("\n");
	return (0);
}
