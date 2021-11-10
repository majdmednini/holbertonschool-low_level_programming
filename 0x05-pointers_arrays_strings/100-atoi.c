#include "main.h"
#include <stdio.h>
/**
 * _atoi - prints every other character of a string
 *@s: integer
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int number = 0;
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
number = (number * 10) + (*s - '0');
else if (number > 0)
break;
} while (*s++);
return (number *sign);
}
