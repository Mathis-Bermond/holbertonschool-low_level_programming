#include "3-calc.h"

int op_add(int a, int b);
{
	return (a + b);
}
int op_sub(int a, int b);
{
	return (a - b);
}
int op_mul(int a, int b);
{
	return (a * b);
}
int op_div(int a, int b);
{
	if (b == 0)
	{
		exit(100);
		printf('\n');
	}
	return (a / b);
}
int op_mod(int a, int b);
{
	if (b == 0)
	{
		printf('\n');
		exit(100);

	}
	return (a % b);
}
