#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 *@s: char
 *@accept: char
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
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
* _strchr - locates a character in a string
* @s: string to be scaned
* @c: the character to be searched in s
* Return: A pointer to the first occuence of the character
* or NULL if the character not found
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
