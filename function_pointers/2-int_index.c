#include "function_pointers.h"

/**
* int_index - A function that searches for an integer.
*
* @array: array
* @size: size
* @cmp: pointer
*
* Return: -1 si erreur
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
