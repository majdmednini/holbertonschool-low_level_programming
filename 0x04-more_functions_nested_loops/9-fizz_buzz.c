#include <stdio.h>
/**
 * main - Prints the numbers from 1-100 with FizzBuzz game
 *
 * Return: Always 0.
 */
int main(void)
{
int i, n;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz\t");
else if ((i % 3) == 0)
printf("Fizz\t");
else if ((i % 5) == 0)
printf("Buzz\t");
else
printf("%d\t", i);
}
return (0);
}
