#include "main.h"

/**
 * array_range - A function that creates an array of integers
 *
 * @min: Minimum
 *
 * @max: maximum
 *
 * Return: A
 **/

int *array_range(int min, int max)

{
	int *a;
	int i, full;

	full = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * full);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		a[i] = min++;
	}
	return (a);
}
