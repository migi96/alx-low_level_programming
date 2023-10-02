#include "main.h"

/**
 * _isalpha - check if the letter is small,
 * Description: checks if the passed character is a alphabet or not
 * @c: passed character as ascii code represented as int
 * Return: Returns either 0 or 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
