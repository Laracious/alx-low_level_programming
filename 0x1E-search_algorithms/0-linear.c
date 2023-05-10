#include "search_algos.h"

/**
 * linear_search - search the first ocurrency of a value in the array
 * @array: set of numbers
 * @size: size of the array
 * @value: value of the search
 * Return: return the firdt index located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (array == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%d]\n", (int) j, (int) array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);

}
