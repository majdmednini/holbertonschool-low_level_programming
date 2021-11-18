#include "main.h"
/**
 * int _strspn - gets the length of a prefix substring
 *@s: char
 *@accept: char
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
while (*s && _strchr(accept, *s++))
{
n++;
}
return (n);
}
#include "main.h"
/**
 * int _strspn - gets the length of a prefix substring
 *@s: char
 *@c: char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
