#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t outer, inner;
	int temp; /* Temporary variable for swapping */

	/*Outer loop to traverse the entire array*/
	for (outer = 0; outer < size; outer++)
	{
		/* Inner loop to compare and swap adjacent elements*/
		for (inner = 0; inner < size - 1; inner++)
		{
			/*Compare adjacent elements*/
			if (array[inner] > array[inner + 1])
			{
				/*Swap elements if in wrong order*/
				temp = array[inner];
				array[inner] = array[inner + 1];
				array[inner + 1] = temp;
				/*Print array after each swap*/
				print_array(array, size);
			}
		}
	}
}

