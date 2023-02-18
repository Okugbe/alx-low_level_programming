#include <stdio.h>
/**
 * main - Print base 10 numbers using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);

}
