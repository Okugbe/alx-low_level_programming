#include <stdio.h>
/**
 * main - To list alphabets in small letters except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char y;

y = 'a';

while (y <= 'z')
{
if ((y != 'e' && y != 'q') && y <= 'z')
{
putchar(y);
}
y++;
}
putchar('\n');
return (0);
}
