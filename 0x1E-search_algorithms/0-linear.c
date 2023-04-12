#include "search_algos.h"

/**
 * linear_search - traverses an array using linear search method and
 * return the occurrence of the element to be searched
 * @array: pointer to array
 * @size: length of the array
 * @value: value to be searched
 * Return: null if array is null, -1 on failure and index of element
 * on sucess
 */
int linear_search(int *array, size_t size, int value)
{
	int index;
	size_t i;

	if (array == NULL)
		return (-1);
	index = -1;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			break;
		}
	}
	return (index);
}
