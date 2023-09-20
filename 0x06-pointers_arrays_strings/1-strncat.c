#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *orig_dest = dest;
    int i = 0;

    // move dest pointer to its end
    while (*dest)
        dest++;

    // copy at most n characters from src
    while (i < n && *src)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }

    if (i < n)
        *dest = '\0';

    return orig_dest;
}
