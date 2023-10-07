#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: largest value in the array
 *
 * Return: pointer to the address of the memory block
 */
int *array_range(int min, int max)
{
	int i = 0, j = 0, c = 0;
	int *arr;

	if (min > max)
		return (NULL);

	c = max - min + 1;
	arr = malloc(sizeof(int) * c);
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}
