#include "main.h"

/**
 * swap_int - swaps the values of intagers
 * @a: integer
 * @b: integer
 *
 * Return 0.
 */

void swap_int(int *a, int *b);
{
	int temp = *a;

	*a = *b;

	*b = temp;
	return (0);
}
