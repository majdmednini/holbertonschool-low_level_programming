#include "main.h"
/**
 * *leet - capitalizes all words of a string
 *@str: char
 * Return: 0
 */
char *leet(char *str)
{
int i, j;
char num[] = {'4', '3', '0', '7', '1'};
char min[] = {'a', 'e', 'o', 't', 'l'};
char maj[] = {'A', 'E', 'O', 'T', 'L'};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if ((str[i] == min[j]) || (str[i] == maj[j]))
str[i] = num[j];
}
}
return (str);
}
