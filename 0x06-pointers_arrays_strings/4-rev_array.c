#include "main.h"
/**
 * reverse_array - compares two strings
 *@a: int
 *@n: int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int i = 0;
int x;
n = n - 1;
while (i < n)
{
x = a[i];
a[i] = a[n];
a[n] = x;
i++;
n--;
}
}
