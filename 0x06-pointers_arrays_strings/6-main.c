#include "main.h"

int main(void)
{
    char s[] = "Expect, to be Capitalized";
    printf("Before: %s\n", s);
    printf("After: %s\n", cap_string(s));
    return (0);
}
