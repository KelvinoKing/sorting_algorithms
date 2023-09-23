#include "sort.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of teh array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int temp;
	bool swapped = false;

	do
	{
		swapped = false;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] >  array [j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = true;
				}
		}
		i++;
	} while (swapped);

}				
