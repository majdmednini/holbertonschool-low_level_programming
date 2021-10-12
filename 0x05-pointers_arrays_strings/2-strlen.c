#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the code
 *@0: The character to check
 *@s: The character to check
 * Return: len (Success).
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
