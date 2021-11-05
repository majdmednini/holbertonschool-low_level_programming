#include "main.h"
#include <stdio.h>
/**
 *_puts - check the code
 *@str: char
 *.
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar ('\n');
}
