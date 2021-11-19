#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *@s: char
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int count = 0;
while (*s != ‘\0’)
{
count++;
s++;
}
return count;
}
