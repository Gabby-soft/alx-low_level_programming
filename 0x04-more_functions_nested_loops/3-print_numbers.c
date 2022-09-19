#include "main.h"
/**
 * print_numbers - function to print the numbers from 0 to 9
 *
 * desc: does not receive any parameters
 *
 * return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
