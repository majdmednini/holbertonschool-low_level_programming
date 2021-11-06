#include "main.h"
#include <stdio.h>
/**
 * rev_string - check the code
 *@s: char
 *
 */
void rev_string(char *s)
{
int len = 0, i = 0;
char x;
while (s[i++])
len++;
for (i = len - 1; i >= len / 2; i--)
{
x = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = x;
}
}
