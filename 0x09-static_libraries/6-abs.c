#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 *
 * @n: The integer for which to calculate the absolute value.
 *
 * Return: The absolute value of the integer.
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
