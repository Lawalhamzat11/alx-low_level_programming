#include "main.h"

/**
 * swap_int(int *a, int *b) - function that swaps the value of two integers
 * @a: first entry
 * @b: second entry
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
