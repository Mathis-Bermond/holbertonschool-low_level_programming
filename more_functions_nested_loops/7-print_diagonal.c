#include "main.h"

/**
* print_diagonal - Test
* @n: OK
* Return: 0
*/

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(' ');
		n--;
	}
	_putchar('\\');
	if (n == 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
