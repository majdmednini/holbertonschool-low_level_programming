#include "search_algos.h"

/**
 * linear_search - searche for a value in array using the Linear search
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			j = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, j);
			if (j == value)
				return (i);
		}
	}
	return (-1);
}
