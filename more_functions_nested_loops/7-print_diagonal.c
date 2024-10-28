#include "main.h"

/**
* print_diagonal - Test
* @n: OK
* Return: 0
*/

void print_diagonal(int n)
{
	int i, n;

	for (i = 0; i < n; i++)
	{
		for (n = 0; n < i; n++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
