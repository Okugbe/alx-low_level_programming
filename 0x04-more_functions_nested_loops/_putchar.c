#include "main.h"
#include <unistd.h>
/**
 * _putchar - To write the char c to stdout
 * @c: The character to print
 *
 * Return: Always 1 (Success)
 * on error, -1 is returned, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
