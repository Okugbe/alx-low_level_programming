#include <stdio.h>
/**
 * main - To list alphabets in small letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for(y = 'A'; y <= 'Z' y++)
	{
		char lower_case = tolower(y);
		putchar(lower_case);
	}

	return (0);
}
