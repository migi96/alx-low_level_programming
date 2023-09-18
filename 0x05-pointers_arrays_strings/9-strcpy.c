#include "main.h"

/**
 * _strcpy - copies the string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
