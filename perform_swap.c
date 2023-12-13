#include "monty.h"
/**
 * perform_swap - swaps the values of two integers
 * @element1: pointer to the first integer
 * @element2: pointer to the second integer
 */

void perform_swap(int *element1, int *element2)
{
	int temporary_value; // Temporary variable for swapping
	
	temporary_value = *element1;
	*element1 = *element2;
	*element2 = temporary_value;
}
