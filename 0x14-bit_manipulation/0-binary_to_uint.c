#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing the binary number
 *
 * Return: the converted number,
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		output = (output << 1) | (*b - '0');
		b++;
	}

	return (output);
}
