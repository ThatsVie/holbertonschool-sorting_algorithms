#include "sort.h"
/**
 * swap_elements - swaps two elements in an array
 * @array: array of integers
 * @index1: index of the first element
 * @index2: index of the second element
 * @size: size of the array
 */
void swap_elements(int *array, int index1, int index2, size_t size)
{
	int temp;

	if (index1 != index2)
	{
		temp = array[index1];
		array[index1] = array[index2];
		array[index2] = temp;
		print_array(array, size);
	}
}

/**
 * partition - partitions the array and returns the pivot index
 * @array: array of integers
 * @start: starting index of the partition
 * @end: ending index of the partition
 * @size: size of the array
 * Return: pivot index
 */
{
	int left_index = start, right_index, pivot = array[end];

	for (right_index = start; right_index < end; right_index++)
	{
		if (array[right_index] < pivot)
		{
			swap_elements(array, left_index, right_index, size);
			left_index++;
		}
	}
	swap_elements(array, left_index, end, size);
	return left_index;
}

/**
 * recursive_quicksort - recursively sorts an array using Quicksort algorithm
 * @array: array of integers
 * @start: starting index of the array or partition
 * @end: ending index of the array or partition
 * @size: size of the array
 */

void recursive_quicksort(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		recursive_quicksort(array, start, pivot - 1, size);
		recursive_quicksort(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array:
 * @size:
 */
void quick_sort(int *array, size_t size);
{
	if (size < 2)
		return;

	recursive_quicksort(array, 0, size - 1, size);
}
