#include <stdio.h>
/**
 * main - To print Hexadecimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int dec;

char hexa;

dec = 0;
hexa = 'a';
while (dec < 10)
{
putchar(dec + '0');
dec++;
}
while (hexa <= 'f')
{
putchar(hexa);
hexa++;
}
putchar('\n');
return (0);
}
