#include "main.h"

int main(void)
{
    char s[] = "ROT13 (rotate by 13 places)";
    printf("Before: %s\n", s);
    printf("After: %s\n", rot13(s));
    printf("Rot13 again: %s\n", rot13(s));
    return (0);
}
