#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string
 */
void puts_half(char *str)
{
    int len = 0, i;

    while (str[len])
        len++;

    i = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

    for (; i < len; i++)
        _putchar(str[i]);

    _putchar('\n');
}
