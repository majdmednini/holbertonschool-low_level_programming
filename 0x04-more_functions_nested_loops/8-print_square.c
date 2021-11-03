#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 *@n : number of times the character
 * Return: Always 0.
 */
void print_square(int size)
{
int i;
if (size > 0)
{
for (i = 0; i < size; i++)
_putchar('#');
}
_putchar('\n');
}
