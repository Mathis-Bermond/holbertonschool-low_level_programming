#include "main.h"

/**
* main - Test
*
* @argc:Blop
* @argv:
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, addition;

	for (num1 = 1; num1 < argc; a++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (!isdigit(argv[num1][num2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition = addition + atoi(argv[num1]);
	}
	printf("%i\n", addition);
	return (0);
}
