#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 *@n: int
 *@m: int
 * Return: count or 0 (Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count = 0, flipped;
if (n == 0 && m == 0)
{
return (0);
}
else
{
flipped = n ^ m;
if (flipped == 0)
return (count);
while (flipped > 0)
{
count += flipped & 1;
flipped >>= 1;
}
return (count);
}
}
