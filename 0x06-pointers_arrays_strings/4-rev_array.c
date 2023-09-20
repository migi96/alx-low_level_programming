#include "main.h"

void reverse_array(int *a, int n)
{
    int i = 0, temp;
    int end = n - 1;

    while (i < end)
    {
        temp = a[i];
        a[i] = a[end];
        a[end] = temp;
        i++;
        end--;
    }
}
