#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *@str: char
 * Return: 0
 */
char *cap_string(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
