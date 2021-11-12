#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 *@str: string
 *@rot13: rot13
 * Return: s
 */
char *rot13(char *alpha *rot13)
{
int i, j;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; s[i] != '\0'; i++)
for (j = 0; j < 52; j++)
if (s[i] == alphabet[j])
s[i] = rot_it[j], j = 52;
return (s);
}
