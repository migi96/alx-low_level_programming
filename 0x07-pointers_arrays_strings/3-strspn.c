#include "main.h"

/**
 * _strspn - gets hte length
 * @s: string s
 * @accept: string accept
 * Return: inc1
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c1;
	unsigned int c2;

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		for (c2 = 0; accept[c2] != s[c1]; c2++)
		{
			if (accept[c2] == '\0')
				return (c1);
		}
	}
	return (c1);
}
