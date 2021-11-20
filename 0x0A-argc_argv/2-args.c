#include <stdlib.h>
#include <stdio.h>
/**
 * main -  prints all arguments it receives
 * @argc: int
 * @argv: char
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", (argc - 1));
return (0);
}
