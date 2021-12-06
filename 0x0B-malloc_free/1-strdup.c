#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: char
 * Return: Always 0.
 */
char *_strdup(char *str)
{
{
unsigned int i;
char *p;
if (size == 0)
return (0);
p = (char *)malloc(size * sizeof(char));
if (p == NULL)
{
return (0);
}
else
{
for (i = 0; i <= size; i++)
p[i] = c;
}
return (p);
}
}
