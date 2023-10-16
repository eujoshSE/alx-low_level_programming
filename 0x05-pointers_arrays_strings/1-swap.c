#include "main.h"

/**
* swap_int - Swaps the values of two numbers.
* @a: The first number to be swapped.
* @b: The second number to be swapped.
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
