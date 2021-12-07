#include <stdio.h>
/**
 * struct dog - Short description
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: Longer description
 */
struct dog
{
char name;
float age;
char owner;
};
int main()
{
struct dog my_dog = {Poppy, 3.5, Bob};
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
