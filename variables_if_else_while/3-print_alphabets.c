#include <stdio.h>

/**
  *main - Test Alphabet
  *
  *Return: 0
  */

int main(void)

{
	char c = 'a';
	char p = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (p <= 'Z')
	{
		putchar(p);
		p++;
	}

	putchar('\n');
	return (0);
}
