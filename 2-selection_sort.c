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
	int temp, hold_temp, swap = 0;

	if (array == NULL)
		return;
	if (size <= 0 || size == 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		temp = array[i];
		swap = 0;

		for (j = i; j < size; j++)
		{
			if (temp > array[j])
			{
				hold_temp = temp;
				temp = array[j];
				array[j] = hold_temp;
				swap = 1;
			}
		}
		array[i] = temp;
		if (swap != 0)
			print_array(array, size);
	}
}
