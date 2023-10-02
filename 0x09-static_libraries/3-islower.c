#include "main.h"

/**
* _islower - check if the letter is small,
* @c: passed character as ascii code represented as int
* Return: Returns either 0 or 1
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
