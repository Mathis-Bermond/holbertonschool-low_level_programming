#include "main.h"

/**
* print_alphabet_x10 - check the code.
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int c, C;

	for (C = 0; C < 10; C++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
