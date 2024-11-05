#include "main.h"
#include <string.h>

/**
 * reverse_array - test
 * @i:
 * @last:
 * @a:try
 * @n:ok
 */


void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
