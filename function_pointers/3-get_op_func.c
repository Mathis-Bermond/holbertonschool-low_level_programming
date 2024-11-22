#include "3-calc.h"

/**
* get_op_func - Select the right fonction
*
* @s: operator
*
* Return: function or NULL
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
{
	int i;

	while (ops[i].op != NULL; i++)
	{
		if (*s == ops[i].op && (*s + 1) != '\0')
		{
			return (ops[i].f);
		}
		exit(98);
	}
	return (NULL);
}
}
