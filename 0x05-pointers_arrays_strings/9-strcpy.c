#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed to by dest.
 * @dest: The buffer to copy to.
 * @src: The string to copy.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
