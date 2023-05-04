#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int mask = 1UL << 63;
	int counter = 0;

	for (; i < 64; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			counter = 1;
		}
		else if (counter)
			_putchar('0');
		mask >>= 1;
	}
	if (!counter)
		_putchar('0');
}

