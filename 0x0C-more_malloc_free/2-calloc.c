#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of the array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;

	ptr = malloc(j);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[i] = 0;

	return ((void *) ptr);
}
