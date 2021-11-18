#include "main.h"
/**
 * int _strspn - gets the length of a prefix substring
 *@s: char
 *@accept: char
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int count = 0;
for (int i = 0; i < strlen(accept); i++)
{
if (count == strlen(s))
break;
if (accept[i] == s[count])
count++;
} 
return count;
}
