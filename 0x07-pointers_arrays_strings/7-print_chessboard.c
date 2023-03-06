#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: Array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = 1;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
		_putchar('\n');
}
