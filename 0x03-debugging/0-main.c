#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - posit or nega
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
	printf("%d is negative\n", n);
else if (n > 0)
	printf("%d is positive\n", n);
else
	printf("%d is zero\n", n);
return (0);
}
