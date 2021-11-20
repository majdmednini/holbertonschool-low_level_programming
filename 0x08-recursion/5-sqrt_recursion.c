#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: int
 *@b: int
 * Return: Always 0.
 */
int _sqrt(int n, int b)
{
if (n < 0)
return (-1);
if (b > n)
return (-1);
if (b * b == n)
return (b);
return (_sqrt(n, b + 1));
}
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: int
 * Return: the square root integer
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
