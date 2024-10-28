#include "main.h"

/**
* more_numbers - OK
*
*
* Return: 0
*/

void more_numbers(void)
{
	int i, n = 0;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
