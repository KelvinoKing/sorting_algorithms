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
	int temp, current_min, swap = 0;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		current_min = i;
		swap = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[current_min])
			{
				current_min = j;
				swap = 1;
			}
		}
		if (swap)
		{
			temp = array[i];
			array[i] = array[current_min];
			array[current_min] = temp;
			print_array(array, size);
		}
	}
}
