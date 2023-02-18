#include <stdio.h>
/**
 * main - To list alphabets in small letters and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;

char y;

x = 'a';
y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
