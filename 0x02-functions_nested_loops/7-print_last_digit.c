#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int z = n % 10;

	if (z < 0)
	{
		z *= -1;
	}
	_putchar(z + '0');

	return (z);
}
