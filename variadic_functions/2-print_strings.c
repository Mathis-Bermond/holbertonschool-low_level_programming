#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - A function that prints strings, followed by a new line.
 *
 * @separator: The string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(list);
}
