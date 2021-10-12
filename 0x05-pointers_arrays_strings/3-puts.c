#include "main.h"
#include <stdio.h>
/**
 * _puts - check the code
 *@*str  The character to check
 * Return: Always 0.
 */
void _puts(char *str)
{		
char *z[100] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
*str = *z;
{
_puts(z);
}
return (0);
}
