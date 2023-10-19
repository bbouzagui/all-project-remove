#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array
 * @array: The array to operate on
 * @size: The size of the array
 * @action: A function pointer to the function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (index = 0; index < size; index++)

		action(array[index]);
}
