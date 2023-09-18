#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int length = 0, n;

	while (str[length])
		length++;

	n = (length % 2 == 0) ? length / 2 : (length + 1) / 2;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
