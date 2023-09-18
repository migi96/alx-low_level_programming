#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * @dest: destination of the copied string.
 * @src: source string to be copied.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return dest;
}
