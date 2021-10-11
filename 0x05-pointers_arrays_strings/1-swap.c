#include "main.h"
#include <stdio.h>
/**
 * void swap_int - check the code
 *@a: The character to check
 *@b: The character to check
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
*a = 98;
*b = 42;
{
printf("*a=%d, *b=%d\n", *a, *b);
}
{
swap_int(&*a, &*b);
}
{
printf("*a=%d, *b=%d\n", *a, *b);
}
}
