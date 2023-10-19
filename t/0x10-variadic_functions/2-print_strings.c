#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings followed by a separator
 * @separator: The string to be printed between the strings
 * @n: The number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ptr;
	char *str;

	va_start(ptr, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ptr, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && index != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ptr);
}
