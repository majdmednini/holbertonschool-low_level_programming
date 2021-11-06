#include "main.h"
#include <stdio.h>
/**
 * print_rev - check the code
 *@s: char
 *
 */
void print_rev(char *s)
{
int c, len = _strlen(s);
for (c = len - 1; c >= 0; c--)
_putchar(s[c]);
_putchar('\n');
}
/**
 *_strlen - returns the length of a string
 *@s: char
 * Return: len (Success)
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
