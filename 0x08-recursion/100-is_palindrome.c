#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: char
 * Return: length of the string.
 */
int _strlen(char *s)
{
int len = 0;
if (*(s + len))
{
len++;
len += _strlen(s + len);
}
return (len);
}
/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: char
 * @len: int
 * @i: int
 * Return: Always 0.
 */
int check_palindrome(char *s, int len, int i)
{
if (s[i] == s[len / 2])
return (1);
if (s[i] == s[len - i - 1])
return (check_palindrome(s, len, i + 1));
return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: char
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
int i = 0;
int len = _strlen(s);
if (!(*s))
return (1);
return (check_palindrome(s, len, i));
}
