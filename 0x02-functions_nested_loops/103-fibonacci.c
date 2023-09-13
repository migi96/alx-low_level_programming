#include <stdio.h>
#include "main.h"

int main(void)
{
    long i = 1, j = 2, next, sum = 2;

    while (1)
    {
        next = i + j;
        if (next >= 4000000)
            break;

        if (next % 2 == 0)
            sum += next;

        i = j;
        j = next;
    }

    printf("%ld\n", sum);
    return (0);
}
