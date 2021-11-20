#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 *@n: int
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n == 1)
return (0);
else if ((n % 2) == 1)
return (1);
else
return (0);
}
