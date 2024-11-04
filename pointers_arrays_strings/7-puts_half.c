#include "main.h"
#include <string.h>

/**
* puts_half - Print a string in reverse.
*
*
* @str: "I do not fear computers. I fear the lack of them - Isaac Asimov"
*/

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len / 2) + 1;
	}
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
