#include "main.h"

/**
 * swap_int - take in two variables and swaps them
 * @a: value 1
 * @b: value 2
 * return: void
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b =  c;
}
