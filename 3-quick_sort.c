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

	/* Check if the indices are different before swapping*/
	if (index1 != index2)
	{
		/* Swap the elements at the given indices */
		temp = array[index1];
		array[index1] = array[index2];
		array[index2] = temp;
		/* Print the array after the swap*/
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
int partition(int *array, int start, int end, size_t size)
{
	int left_index = start;
	int right_index;
	int pivot = array[end];

	/* Iterate through the partitioned array*/
	for (right_index = start; right_index <= end; right_index++)
	{
		 /* If current element is less than pivot, swap elements*/
		if (array[right_index] < pivot)
		{
			swap_elements(array, left_index, right_index, size);
			left_index++;
		}
	}
	/* Swap the pivot to its correct position*/
	swap_elements(array, left_index, end, size);
	return (left_index);
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

	/* Check if there are elements to sort */
	if (start >= end)
		return;

	/* Find the pivot index and recursively sort sub-arrays*/
	pivot = partition(array, start, end, size);
	recursive_quicksort(array, start, pivot - 1, size);
	recursive_quicksort(array, pivot + 1, end, size);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	/* Check if the array has more than one element*/
	if (size < 2)
		return;

	/* Call the recursive_quicksort function to sort the entire array */
	recursive_quicksort(array, 0, size - 1, size);
}
