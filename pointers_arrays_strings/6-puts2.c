#include "main.h"
#include <string.h>

/**
* puts2 - Print a string in reverse.
*
* @str: "I do not fear computers. I fear the lack of them - Isaac Asimov"
*/

void puts2(char *str)

{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
