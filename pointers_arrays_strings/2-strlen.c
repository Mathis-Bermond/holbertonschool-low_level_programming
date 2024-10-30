#include "main.h"
#include <string.h>

/**
 * _strlen - r
 * @s:
 *
 * Return: the length of the string
 */

int _strlen(char *s)

{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
