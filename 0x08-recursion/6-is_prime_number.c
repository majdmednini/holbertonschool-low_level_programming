#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 *@n: int
 * Return: Always 0.
 */
int is_prime_number(int n)
{
for (int i = 2; i < n; i++)
if (n % i == 0)
return (1);
else 
return (is_prime_number(n + 1) + 1);
}
