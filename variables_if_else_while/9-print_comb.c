#include <stdio.h>

/**
 *main - Sigle digit
 *
 *Return: 0
 */

int main(void)

{
	char i = '0';

	while (i <= '9')
	{
		putchar (i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
