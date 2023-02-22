#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int z;

z = n % 10;

if (n < 0)
{
	n = -n;
}
if (z < 0)
{
	z = -z;
}
_putchar(z + '0');
return (0);
}
