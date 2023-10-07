#include "main.h"

/**
 * string_nconcat - concatenates tow strings.
 * @s1: string 1
 * @s2: string 2
 * @n: amount of chars to be used from s2
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int c1 = 0, c2 = 0, c = 0;
	char *str;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			c1++;

	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
			if (i < n)
				c2++;

	c = c1 + c2 + 1;

	str = malloc(c);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < c1; i++)
		str[i] = s1[i];

	for (j = 0 ; j < c2; i++, j++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
