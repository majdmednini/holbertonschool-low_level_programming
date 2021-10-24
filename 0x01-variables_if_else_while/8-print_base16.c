#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int i = 0;
while (i < 10)
{
printf("%d", i);
i++;
}
for (ch = 'a' ; ch <= 'f'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
