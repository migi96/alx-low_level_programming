#include "main.h"

int main(void)
{
    char r[50];
    char r2[50];
    char r3[50];
    char r4[50];

    printf("Sum: %s\n", infinite_add("79", "1", r, 50));
    printf("Sum: %s\n", infinite_add("999", "1", r2, 50));
    printf("Sum: %s\n", infinite_add("1000", "1", r3, 50));
    printf("Sum: %s\n", infinite_add("00123456789", "1", r4, 50));
    return (0);
}
