#include "main.h"
/**
 * puts_half - prints every other character of a string
 *@str: is a pointer to char and the parameter
 *
 */
void puts_half(char *str)
{
int i;
int x = _strlen(str);
if (x % 2 == 0)
{
for (i = x / 2; i < x; i++)
_putchar(str[i]);
_putchar('\n');
}
else
{
for (i = (x / 2) + 1; i < x; i++)
_putchar(str[i]);
_putchar ('\n');
}
}
#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: char
 *Return: len (Success)
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
