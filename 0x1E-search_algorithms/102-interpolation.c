#include "search_algos.h"
/**
 * interpolation_search - search for value in array using
 * interpolation search
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: -1 on failure and index on success
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
		return (-1);
	low = 0, high = size - 1;
	while (low <= high)
	{
		mid = low + (value - array[low]) *
			 ((high - low) / (array[high] - array[low]));
		if (mid > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high =  mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
