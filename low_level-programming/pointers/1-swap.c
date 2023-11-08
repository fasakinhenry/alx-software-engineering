#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: First integer
 * @b: Second integer
*/
void swap_int(int *a, int *b)
{
	int value_store = *a;
	*a = *b;
	*b = value_store;
}
