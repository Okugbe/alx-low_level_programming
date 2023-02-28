#include "main.h"

/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void rev_string(char *s)
{
	char reverse = s[0];
	int item = 0;
	int i;

	while (s[item] != '\0')
	{
		item++;
	}
	for (i = 0; i < item; i++)
	{
		item--;
		reverse = s[i];
		s[i] = s[item];
		s[item] = reverse;
	}
}
