#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate all the command-line arguments
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to a new string containing concatenated arguments, or NULL
 *	if memory allocation fails or if ac is 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, num = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			num++;
		}
	}
	num += ac;

	p = malloc((sizeof(char) * num) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';

	return (p);
}
