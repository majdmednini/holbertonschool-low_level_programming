#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *@str: char
 * Return: Always 0.
 */
char *_strdup(char *str)
{
unsigned int i;
char *k;
if (str == NULL)
{
return (NULL);
}
k = malloc((strlen(str) + 1) * sizeof(char));
if (k == NULL)
{
return (NULL);
}
else
{
for (i = 0; str[i]; i++)
k[i] = str[i];
}
return (k);
}
