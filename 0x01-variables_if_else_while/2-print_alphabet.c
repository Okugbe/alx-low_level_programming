#include <stdio.h>
/**
 * main - To list alphabets in small letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char y;

y = 'a';

while (y <= 'z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
