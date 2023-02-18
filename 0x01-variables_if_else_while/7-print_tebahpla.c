#include <stdio.h>
/**
 * main - alphabet backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char back;

	back = 'z';
	while (back >= 'a')
	{
		putchar(back);
		back--;
	}
	putchar('\n');
	return (0);
}
