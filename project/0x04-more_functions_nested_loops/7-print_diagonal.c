
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character
 * @n: The number of \ characters to be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
