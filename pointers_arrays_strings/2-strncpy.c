#include "main.h"
#include <string.h>

/**
*_strncpy - Test
*
*@dest: string 1
*@src: string 2
*@n: value
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
