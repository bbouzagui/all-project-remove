#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be print.
 *
 * Return: A string.
 */
void _puts_recursion(char *s)
{
	if (*s > '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		printf("\n");
	}
}
