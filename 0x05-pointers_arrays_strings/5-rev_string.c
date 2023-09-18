#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
    int len = 0, i;
    char tmp;

    while (s[len])
        len++;

    for (i = 0; i < len / 2; i++)
    {
        tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}
