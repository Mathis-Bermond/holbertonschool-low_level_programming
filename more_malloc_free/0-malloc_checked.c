#include "main.h"

/**
 * malloc_checked - checking the pointer
 * 
 * @b: size
 * 
 * return: ptr
 * 
 */

void *malloc_checked(unsigned int b)

{
    void *ptr;

    ptr = malloc(b);

    if (prt == NULL)
        exit(98);
    return(ptr);
}
