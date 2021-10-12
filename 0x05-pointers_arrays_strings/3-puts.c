#include "main.h"
#include <stdio.h>
/**
 * _puts - check the code
 *@*str  The character to check
 * Return: Always 0.
 */
void _puts(char *str)
{		
while (*str)
_putchar(*str++);
_putchar ('\n');
}
