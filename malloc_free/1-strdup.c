#include "main.h"

/**
 *_strdup - Test
 *
 * @str: Test
 *
 *Return: Test
 *
 */

char *_strdup(char *str)

{
	int size = 0;
	char *ptr, *ret;

	if (!str)
		return (NULL);

	ptr = str;
	while (*ptr++)
		size++;

	ret = malloc(size + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*str)
		*ptr++ = *str++;

	*ptr = 0;
	return (ret);
}
