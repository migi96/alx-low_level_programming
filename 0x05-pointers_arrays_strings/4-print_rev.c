#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
