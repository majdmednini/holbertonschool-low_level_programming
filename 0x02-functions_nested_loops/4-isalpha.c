#include "main.h"
/**
 * _isalpha - Test the _isalpha function
 * @n: Number to pass to _isalpha function
 * 
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
case 'A' ... 'Z':
return (1);
break;
case 'a' ... 'z':
return (1);
break;
default:
return (0);
}
