#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 *@s: char
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
int len = 0, i = 0;
char x;
while (s[i++])
len++;
for (i = len - 1; i >= len / 2; i--)
{
x = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = x;
}
}
