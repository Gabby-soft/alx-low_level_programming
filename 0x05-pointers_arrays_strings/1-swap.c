#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: point 1
 * @b: point 2
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
