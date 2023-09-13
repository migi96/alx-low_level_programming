#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The input value.
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				int product = i * j;
				if (j == 0)
				{
					_putchar(product + '0');
				}
				else if (product <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
