#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0; /* To check if we've started processing numbers */
	int prev_result;  /* To store the previous result value */

	while (*s)
	{
		if (*s == '-' && !started)
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			prev_result = result;  /* Save the previous result */
			result = result * 10 + (*s - '0') * sign;

			/* Handle potential overflow */
			if (sign > 0 && (result < prev_result || result < 0))
			{
				/* Handle positive overflow */
				return (INT_MAX);
			}
			else if (sign < 0 && (result > prev_result || result > 0))
			{
				/* Handle negative overflow */
				return (INT_MIN);
			}
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (result);
}
