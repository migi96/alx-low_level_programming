#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
    char password[60];
    int sum = 0, i = 0, randomValue;

    srand(time(NULL));

    /* Randomize characters until sum reaches close to the target value */
    while (sum < (2772 - 122))
    {
        randomValue = (rand() % 122) + 1;
        password[i++] = randomValue;
        sum += randomValue;
    }

    /* Append the final character such that the checksum matches */
    password[i++] = 2772 - sum;
    password[i] = '\0';

    printf("%s\n", password);
    return (0);
}
