#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers separated by a separator
 * @separator: The string to use as a separator
 * @n: The number of intege arguments
 * @...: The integer values to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sec;
	unsigned int i;

	va_start(sec, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sec, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(sec);
}
