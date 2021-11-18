#include "main.h"
/**
 * int _strspn - gets the length of a prefix substring
 *@s: accept
 *@c: s
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int count = 0;
for (int i = 0; i < strlen(t); i++)
{
if (count == strlen(s))
break;
if (accept[i] == s[count])
count++;
} 
return count;
}

