#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 *@array: pointer to the first element
 *@size: the number of elements
 *@value: value of search
 * Return: first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int arr;

	for (i = 0; i < size; i++)
	{
		arr = array[i];
		printf("Value checker array[%d] = [%d]\n", i, arr);
		if (arr == value)
			return (i);
	}
	return (-1);
}
