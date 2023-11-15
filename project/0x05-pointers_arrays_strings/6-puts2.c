#include "main.h"
/**
 * puts2 - Prints one character out of two of a string
 * @str: The string characters
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[i++])
		l++;

	for (i = 0; i < l; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
