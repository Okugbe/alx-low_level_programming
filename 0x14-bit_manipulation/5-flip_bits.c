/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int counter = 0;
	unsigned long int exclusion = n ^ m;

	for (; i < 64; i++)
	{
		if ((exclusion >> i) & 1)
			counter++;
	}
	return (counter);
}
