#include "main.h"

char *string_toupper(char *s)
{
    char *orig_s = s;

    while (*s)
    {
        if (*s >= 'a' && *s <= 'z')
            *s = *s - 'a' + 'A';
        s++;
    }

    return orig_s;
}
