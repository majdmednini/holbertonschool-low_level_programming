#include "main.h"
/**
 * print_number - prints an integer
 *@n: integer
 * Return: int
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
else if (n == 0)
_putchar('0');
else ((n / 10) > 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}
