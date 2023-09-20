#include "main.h"

int main(void)
{
    int n;

    n = 123456789;
    printf("Expected Output: 123456789\n");
    print_number(n);
    printf("\n");

    n = -98;
    printf("Expected Output: -98\n");
    print_number(n);
    printf("\n");

    return (0);
}
