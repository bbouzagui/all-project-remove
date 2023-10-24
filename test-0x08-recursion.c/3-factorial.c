#include "main.h"

/**
 * factorial - The factorial of a given number.
 *
 * @n: integer to be print.
 *
 * Return: factorial of ineger.
 */

int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n *= factorial(n - 1));
}
