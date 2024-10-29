#include "main.h"

/**
* print_diagonal - Test
*@n: Test
*@c
*@i
* Return: 0
*/

void print_diagonal(int n)

{
	int i;
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
