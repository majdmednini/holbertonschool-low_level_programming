#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 **/
int main(void)
{
int intType;
float floatType;
char charType;
		printf("Size of a char: %zu byte(s)\n", sizeof(charType));
		printf("Size of an int: %zu byte(s)\n", sizeof(intType));
		printf("Size of a long int: %d byte(s)\n", sizeof(long));
		printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
		printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
			return (0);
}
