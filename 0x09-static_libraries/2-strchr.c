#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: input
 * @c: output
 *
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
