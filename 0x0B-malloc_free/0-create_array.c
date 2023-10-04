#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of arry.
 * @c: specific char.
 * Return: the array after allocation or null if is fails.
 */
char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int i;

	buff = malloc(sizeof(char) * size);
	if (size == 0 || buff == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buff[i] = c;
	return (buff);
}
