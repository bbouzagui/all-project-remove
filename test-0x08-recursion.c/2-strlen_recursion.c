#include "main.h"

int _strlen_recursion(char *s)
{
	int index = 0;

	if(*s > 0)
	{
		index ++;
		index += _strlen_recursion(s + 1);
	}
	return (index);
}
