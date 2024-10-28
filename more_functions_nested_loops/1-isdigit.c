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
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
