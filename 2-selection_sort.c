#include "sort.h"

/**
 * selection_sort-sorts an array of integers in ascending order
 *
 * @array: pointer to array to be sorted
 * @size: size of array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, hold_temp;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		temp = array[i];

		for (j = i + 1; j < size; j++)
		{
			if (temp > array[j])
			{
				hold_temp = temp;
				temp = array[j];
				array[j] = hold_temp;
				print_array(array, size);
			}
		}
		array[i] = temp;
	}
}
