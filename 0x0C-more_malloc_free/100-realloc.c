#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of ptr
 * @new_size: size of the new memory to be allocated
 *
 * Return: pointer to the address of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *arr;
	char *pptr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (pptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (pptr != NULL && new_size == 0)
	{
		free(pptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		arr = malloc(new_size);

		for (i = 0; i < new_size; i++)
		{
			arr[i] = pptr[i];
		}
		free(pptr);
		return (arr);
	}
	if (new_size > old_size)
	{
		arr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			arr[i] = pptr[i];
		}
		free(pptr);
		return (arr);
	}
	return (pptr);
}
