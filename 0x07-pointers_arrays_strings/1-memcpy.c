#include "main.h"
/**
 * *_memcpy - copies memory area
 *@dest: char
 *@src: char
 *@n: int
 * Return: nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
src[i] = dest;
return (dest);
}
