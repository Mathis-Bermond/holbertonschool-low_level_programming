#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	int r;

	for (i = 0; i < 10; i++)
	{
		for (r = 'a'; r <= 'z';)
		{
			_putchar(r);
			r++;
		}
		_putchar('\n');
	}
}
