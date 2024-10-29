#include "main.h"
#include <stdio.h>

/**
* print_triangle - OK
*
*@size: Type
*/

void print_triangle(int size)

{
	int i, j, k;
	int count = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
