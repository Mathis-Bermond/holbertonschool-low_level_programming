#include "main.h"

/**
 *main - 0-putchar.c
 *
 *Return: 0
 */

int main(void)

{
	char *n = "_putchar";

	while (n[0] != '\0')
	{
		_putchar(n[0]);
		n++;
	}
	_putchar('\n');
	return (0);
}
