#include "main.h"
#include <stdio.h>


/**
*fizz_buzz - Test
*@i
*
*Return: Test
*/

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	fizz_buzz();
	return (0);
}
