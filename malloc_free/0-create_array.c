#include "main.h"

/**
* create_array - cration
*@size: argument taille
*@c: contenance
*
* Return: pointer ou NULL si fail
*/

char *create_array(unsigned int size, char c)
{
	char *ar = NULL;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		ar = (char *)malloc(size * sizeof(char));
		if (ar != NULL)
		{
			for (i = 0; i < size; i++)
				ar[i] = c;
		}
	}
	return (ar);
}
