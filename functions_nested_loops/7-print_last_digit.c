#include "main.h"

/**
* print_last_digit - Print sign
*
* @c: int
*
* Return: value
*/

int print_last_digit(int c)
{
int l;

if (c < 0)
{
l = -1 * (c % 10);
}
else
{
l = c % 10;
}
_putchar(l + '0');
return (l);
}
