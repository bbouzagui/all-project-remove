#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search
 * @size: The size of the array
 * @cmp: A pointer to function used to compare integers
 *
 * Return: The index of the first integer for which the comparison
 * function doesn't return 0. If no such integer is found, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;
	int result;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	while (index < size)
	{
		result = cmp(array[index]);
		if (result != 0)
		{
			return (index);
		}
		index++;
	}

	return (-1);
}
