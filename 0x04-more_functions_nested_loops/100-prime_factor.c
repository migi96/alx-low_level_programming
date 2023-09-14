// File: 100-prime_factor.c

#include <stdio.h>
#include <math.h>

/**
 * main - Find and print the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long number = 612852475143;
    unsigned long factor = 2;

    while (number > 1)
    {
        if (number % factor == 0)
        {
            number /= factor;
        }
        else
        {
            factor++;
        }
    }
    printf("%lu\n", factor);
    return (0);
}
