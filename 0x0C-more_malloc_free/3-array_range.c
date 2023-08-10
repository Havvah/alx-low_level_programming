#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly cereated array
 * if man > max, return NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
