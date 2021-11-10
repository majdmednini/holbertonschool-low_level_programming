#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 *@src: char
 *@dest: char
 * *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i, n;
for (i = 0; src[i] != '\0'; i++)
{
continue;
}
n = 0;
while (n <= i)
{
dest[n] = src[n];
n++;
}
return (dest);
}
