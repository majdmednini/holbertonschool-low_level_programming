#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *@str: char
 * Return: 0
 */
char *cap_string(char *str)
{
int i, j = 0;
char ch[] = {',', '\t', '\n', ' ', ';', '.','!', '?', '"', '(', ')', '{', '}'};
i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0)
{
str[0] = str[0] - 32;
}
else
{
for (j < 13; j++;)
{
if (str[i - 1] == ch[j])
str[i] = str[i] - 32;
}
}
}
i++;
}
return (str);
}
