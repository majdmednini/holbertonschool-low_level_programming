#include "main.h"
int _strlen(char *s);
/**
 * puts_half - prints every other character of a string
 *@str: is a pointer to char and the parameter
 *
 */
void puts_half(char *str)
{
int i;
int x = _strlen(str);
for (i = 0; i < x; i += 2)
_putchar(str[i]);
_putchar ('\n');
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
