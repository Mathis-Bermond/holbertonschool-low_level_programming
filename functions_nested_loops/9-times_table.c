#include "main.h"

/**
* times_table - Test
*
* Return: 0
*/

void times_table(void)

{
	int a, e;
	int count = 0;

	for (a = 0; a <= 9; a++)
	{
		for (e = 0; e <= 9; e++)
		{
			count = a * e;
			if (count < 10)
			{
				_putchar(count + '0');
			}
			else
			{
				_putchar((count / 10) + '0');
				_putchar((count % 10) + '0');
			}
			if (e != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((a * (e + 1)) < 10 && e != 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
