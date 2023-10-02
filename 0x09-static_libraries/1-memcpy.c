#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: sourece
 * @n: beytes of @src
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;
	unsigned int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
