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
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
