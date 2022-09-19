#include "main.h"
/**
 * print_diagonal - a function that prints diagonal lines
 *
 * @n: number of times to print lines
 *
 * return: 0
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (a = 0; a < b; a++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
