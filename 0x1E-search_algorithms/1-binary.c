#include "search_algos.h"

/**
 * binary_search - traverse the array using binary search
 * technique assuming the array is sorted and has unique elements
 * @array: array to traverse
 * @size: length of the array
 * @value: value to check
 * Return: -1 if array is null or value does not exist and
 * index on success
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, low, med, high, j;

	index = -1, low = 0, high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j != high)
				printf(", ");
			else
				printf("\n");
		}
		med = (high + low) / 2;
		if (array[med] == value)
		{
			index = med;
			break;
		}
		else
		{
			if (array[med] < value)
				low = med + 1;
			else
				high = med - 1;
		}
	}
	return (index);
}
