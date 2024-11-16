#include "main.h"

/**
* malloc_checked - checking the pointer
*
* @b: size
*
* Return: ptr
*
*/

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
