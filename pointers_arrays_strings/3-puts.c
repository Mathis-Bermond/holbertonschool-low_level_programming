#include "main.h"

/**
* _puts - Provid similar
*
* @str: String
*
*
*/

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
