#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: main str to be examined
 * @needle: searched in hystack
 *
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
