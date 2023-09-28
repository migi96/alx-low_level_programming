#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to calculate the square root
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (_sqr_root(n, 0));
}

/**
 * _sqr_root - returns the sqare root of a number
 * @n: integer
 * @j: iterator
 *
 * Return: square root of the number or -1.
 */

int _sqr_root(int n, int j)
{
	if (n == j * j)
		return (j);
	if (n < j * j)
		return (-1);
	return (_sqr_root(n, j + 1));
}
