#include "main.h"
#include <stdio.h>
/**
 * print_rev - check the code
 *@s: char
 *
 */
void print_rev(char *s)
{
while (*s)
_putchar(*s--);
_putchar ('\n');
}
