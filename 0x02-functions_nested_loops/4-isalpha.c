#include "main.h"
/**
 * _isalpha - Test the _isalpha function
 * @n: Number to pass to _isalpha function
 * 
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
if (c < 'z' && c > 'a')
return (1);
else if (c < 'Z' && c > 'A')
return (1);
else
return (0);
}
