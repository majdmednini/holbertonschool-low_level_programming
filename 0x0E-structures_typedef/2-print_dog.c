#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;


if (d->name == NULL)
	printf("Name: %s\n", "NULL");
else
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
}
if (d->owner == NULL)
	printf("Owner: %s\n", "NULL");
else
{
	printf("Owner: %s\n", d->owner);
}
}
