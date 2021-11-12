#include "main.h"
/**
 * print_number - prints an integer
 *@n: integer
 */
void print_number(int n)
{
int d;

d = 1;
if (n < 0)
{
_putchar('-');
n = -n;
}
else if (n == 0)
_putchar('0');
while ((n / d) > 9)
d = d * 10;
while ((n / 10) > 0)
{
_putchar(n / d);
n = n % 10;
d = d / 10;
}
}
