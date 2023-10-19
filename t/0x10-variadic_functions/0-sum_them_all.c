#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters
 * @n: The number of arguments
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sec;
	int sum = 0;
	unsigned int i;

	if (n != 0)
	{
		va_start(sec, n);

		for (i = 0; i < n; i++)
		{
		sum += va_arg(sec, const unsigned int);
		}

	va_end(sec);
	}

	return (sum);
}
