#include "main.h"

/**
 * swap_int - swaps the values of intagers
 * @a: integer
 * @b: integer
 *
 * Returns nothing
 */

void swap_int(int *a, int *b);
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
