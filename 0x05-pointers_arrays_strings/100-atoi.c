#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, num = 0, started = 0;

    while (s[i])
    {
        if (s[i] == '-' && !started)
            sign *= -1;
        else if (s[i] == '+' && !started)
            sign *= 1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            started = 1;
            num = (num * 10) + (s[i] - '0');
        }
        else if (started)
            break;
        i++;
    }
    return (num * sign);
}
