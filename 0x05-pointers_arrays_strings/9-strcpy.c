#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	char *original_dest = dest;

	while ((*dest++ = *src++))
		;

	return original_dest;
}
