#include "sort.h"

/**
 * swap_ints - this swap two  given integer
 * @a: this first integer
 * @b: this second integer
 */

void swap_ints(int *a,int *b)
{
	int tmp;
	tmp = *a; 
	*a = *b;
	*b = tmp;
}
