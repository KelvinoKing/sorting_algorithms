#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using the Shell
 * sort algorith, using the knuth sequaence
 *
 * @array: pointer to array
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	size_t outer, inner;
	int insertionValue;

	while (gap < size / 3)
	{
		gap = gap * 3 + 1;
	}
	while (gap > 0)
	{
		for (outer = gap; outer < size; outer++)
		{
			insertionValue = array[outer];
			inner = outer;
			while (inner > gap - 1 && array[inner - gap] >= insertionValue)
			{
				array[inner] = array[inner - gap];
				inner = inner - gap;
			}
			array[inner] = insertionValue;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
