#include "main.h"
#include <string.h>

/**
* print_rev - Print a string in reverse.
*
* @s: "I do not fear computers. I fear the lack of them - Isaac Asimov"
*/

void print_rev(char *s)

{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
