#include "search_algos.h"
#include <math.h>

/**
 * jump_search - uses jump search technique to search for
 * value in an array
 * @array: array to traverse
 * @size: length of the array
 * @value: value to search for
 * Return: -1 on failure and index on success
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, high, low;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	low = 0, high = size - 1;
	for (i = 0; i < step; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value < array[step])
			high = step - 1;
		else
			low = step + 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (i = low; i <= high; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
