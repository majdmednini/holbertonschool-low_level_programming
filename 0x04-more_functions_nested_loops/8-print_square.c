#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 *@size : the size of the square
 *
 */
void print_square(int size)
{
int j, i;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
if (i == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
