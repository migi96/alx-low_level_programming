#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i])
		i++;

	i--;  /* move to the character before null */

	while (i > j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
