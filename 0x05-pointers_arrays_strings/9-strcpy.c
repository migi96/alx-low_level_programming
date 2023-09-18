#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    return (dest);  // Note the parentheses around dest
}
