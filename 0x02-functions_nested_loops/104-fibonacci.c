#include "main.h"
#include <stdio.h>
#include <string.h>

void add_strings(char num1[], char num2[], char result[])
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0, i, j;
    
    int max_len = (len1 > len2) ? len1 : len2;

    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, max_len--)
    {
        int n1 = (i >= 0) ? num1[i] - '0' : 0;
        int n2 = (j >= 0) ? num2[j] - '0' : 0;

        int tmp = n1 + n2 + carry;
        carry = tmp / 10;
        result[max_len] = (tmp % 10) + '0';
    }
    result[strlen(result)] = '\0';
}

int main(void)
{
    char a[5000] = "1";
    char b[5000] = "2";
    char result[5000];

    printf("%s, %s", a, b);

    for (int i = 2; i < 98; i++)
    {
        add_strings(a, b, result);
        printf(", %s", result);

        strcpy(a, b);
        strcpy(b, result);
    }

    printf("\n");
    return 0;
}
