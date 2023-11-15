#include "main.h"

/**
 * print_chessboard - Print an 8x8 chessboard
 * @a: 2D array representing the chessboard
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int index, book;

	for (index = 0; index < 8; index++)
	{
		for (book = 0; book < 8; book++)
		{
			_putchar(a[index][book]);
		}
		_putchar('\n');
	}
}
