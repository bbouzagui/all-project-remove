#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calculate and print the sums of the two diagonals
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix (number of rows or columns)
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int index;

	int prl0, prl1;

	prl0 = 0;
	prl1 = 0;

	for (index = 0; index < size; index++)
	{
		prl0 += a[(size * index) + index];
		prl1 += a[(size * (index + 1)) - (index + 1)];
	}
	printf("%d, %d\n", prl0, prl1);
}
