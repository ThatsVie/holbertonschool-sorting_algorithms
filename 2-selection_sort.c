#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t current, compare, min;

	/* Iterate through the array */
	for (current = 0; current < size - 1; current++)
	{
		min = current; /* Assume the current index has the minimum value */

		 /*Find the index of the minimum element in the unsorted part*/
		for (compare = current + 1; compare < size; compare++)
		{
			if (array[min] > array[compare])
				min = compare;
		}

		/* Swap if the minimum element is not in its correct position*/
		if (min != current)
		{
			perform_swap(&array[current], &array[min]);
			print_array(array, size); /* print after each swap */
		}
	}
}

/**
 * perform_swap - swaps the values of two integers
 * @element1: pointer to the first integer
 * @element2: pointer to the second integer
 */
void perform_swap(int *element1, int *element2)
{
	int temporary_value; /* Temporary variable for swapping */

	temporary_value = *element1;
	*element1 = *element2;
	*element2 = temporary_value;
}


