#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Calculatrice
*
*@argc: argument
*@argv: array
*
*Return: résulta
*/

int main(int argc, char *argv[])
{
	int result = 0;

	int (*tmp)(int, int);
	int num1 = atoi(argv[1]);

	int num2 = atoi(argv[3]);

	tmp = &get_op_func;
	result = (*tmp)(num1, num2);

	return (result);
}
