#include "main.h"
#include <string.h>

/**
* rev_string - Print a string in reverse.
*
* @s: "I do not fear computers. I fear the lack of them - Isaac Asimov"
*/

void rev_string(char *s)

{
	int i = 0;
	int c = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	while (c < i)
	{
		i--;
		temp = s[c];
		s[c] = s[i];
		s[i] = temp;
		c++;
	}
}
