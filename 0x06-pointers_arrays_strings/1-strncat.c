#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: char
 *@src: char
 *@n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int c, d;
c = 0;
while (dest[c] != '\0')
{
c++;
}
for (d = 0; src[d] && d < n; d++)
{
dest[c++] = src[d];
}
dest[c] = '\0';
return (dest);
}
