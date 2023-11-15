#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the integer array to be reversed
 * @n: Number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int f, tmp;

	for (f = 0; f < n / 2; f++)
	{
		tmp = a[f];
		a[f] = a[n - 1 - f];
		a[n - 1 - f] = tmp;
	}
}
