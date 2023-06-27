#include <stdio.h>

/**
 * swap_int - swaps the values of two ints
 * @a: the first int to be swapped
 * @b: the second int o be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
