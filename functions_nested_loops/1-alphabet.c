#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int c = 'a';

	while (c != 'z')
	{
		_putchar(c);
		_putchar('\n');
		c++;
	}
	return (0);
}
