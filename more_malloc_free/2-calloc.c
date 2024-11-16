#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * 
 * @size: size
 * @nmemb: elements
 * 
 * return: return pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *p;
	unsigned int i, d;

	d = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(d);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (d); i++)
	{
		p[i] = 0;
	}
	return (p);
}
