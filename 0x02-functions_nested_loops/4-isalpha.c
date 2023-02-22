#include "main.h"
/**
 *_isalpha -  a function that checks for alphabetic character
 * @c: The char that would be checked
 * Return: 1 if c is a letter, lowercase or uppercase, Otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
