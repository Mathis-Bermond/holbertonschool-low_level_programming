#include <stdio.h>

/**
 *main - Hexadecimal one
 *
 *Return: 0
 */

int main(void)
{
	char c = '0';
	char C = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (C <= 'f')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}


