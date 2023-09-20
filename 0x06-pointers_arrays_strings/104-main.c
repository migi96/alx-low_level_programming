#include "main.h"

int main(void)
{
    int i;
    char buffer[] = "This is a string!\0And this is the rest of the #buffer.";
    char *p;

    p = buffer;
    while (*p)
    {
        putchar(*p);
        p++;
    }
    for (i = 0; i < 49; i++)
        putchar('-');
    putchar('\n');
    print_buffer(buffer, sizeof(buffer) - 1);
    return (0);
}
