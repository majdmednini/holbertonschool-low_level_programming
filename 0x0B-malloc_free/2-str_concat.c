#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *@s1: char
 *@s2: char
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
{
unsigned int i, j = 0, len = 0;
char *k;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] || s2[i]; i++)
len++;
k = malloc(sizeof(char) * len);
if (k == NULL)
{
return (NULL);
}
else
{
for (i = 0; s1[i]; i++)
k[j++] = s1[i];
for (i = 0; s2[i]; i++)
k[j++] = s2[i];
}
return (k);
}
