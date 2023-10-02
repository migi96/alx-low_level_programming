#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
	dest[c] = src[i];
	c++;
	i++;
	}
	dest[c] = '\0';
	return (dest);
}
