#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to first int.
 * @b: Pointer to second int.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
