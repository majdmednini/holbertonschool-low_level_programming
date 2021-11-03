#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle
 *@size : number of times the character
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar(' ');
_putchar('#');
if (i == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
