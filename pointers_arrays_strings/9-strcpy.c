#include "main.h"
#include <string.h>

/**
*_strcpy - Copies the string
*@dest: string 1
*@i
*@len
*@src: Try
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
