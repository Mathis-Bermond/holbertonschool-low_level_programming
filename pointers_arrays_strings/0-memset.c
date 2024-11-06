#include "main.h"
#include <string.h>

/**
* _memset - fills memory with constant byte
*
*@s: pointer
*@b: byte
*@n: usigned
*
*Return: void
*/

char *_memset(char *s, char b, unsigned int n)

{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
