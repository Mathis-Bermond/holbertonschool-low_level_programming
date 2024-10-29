#include "main.h"

/**
 * print_square - Test
 *
 *@l
 *@L
 *@size: Test
 */

void print_square(int size)

{
	int l;
	int L;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (L = 0; size > L; L++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
