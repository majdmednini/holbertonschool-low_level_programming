#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it
 *@c: char
 *@size: unsigned int
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
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
