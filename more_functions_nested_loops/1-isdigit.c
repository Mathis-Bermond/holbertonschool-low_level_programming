#include "main.h"

/**
* _isdigit - Try
*
* @c: OK
*
* Return: Value
*/

int _isdigit(int c)
{
	if (c <= 126 && c >= 64)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
