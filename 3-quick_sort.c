#include "sort.h"

void new_sort(int *array, ssize_t low, ssize_t high, size_t size);
ssize_t partition(int *array, ssize_t low, ssize_t high, size_t size);
void swap(int *array, int *a, int *b, size_t size);

/**
 * quick_sort - sorts an array of integers in ascending order using
 * Quicksort algorith
 *
 * @array: pointer to array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	new_sort(array, 0, size - 1, size);
}

/**
 * new_sort - helper function of quick_sort
 * @array: pointer to array of integers
 * @low: first index of array
 * @high: last index of array
 * @size: size of array
 */
void new_sort(int *array, ssize_t low, ssize_t high, size_t size)
{
	if (low < high)
	{
		ssize_t pi = partition(array, low, high, size);

		/*handle both the right side and left side of pivot*/
		new_sort(array, low, pi - 1, size);
		new_sort(array, pi + 1, high, size);
	}
}

/**
 * partition - sorts the elements using the pivot
 * @array: pointer to array
 * @low: starting index of array in relation to pivot
 * @high: ending point of array in relation to pivot
 * @size: size of array
 *
 * Return: ssize_t
 */
ssize_t partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	ssize_t i = low - 1;
	ssize_t j;
	int pivot = array[high];

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, &array[i], &array[j], size);
		}
	}

	/*swap the greatest element with pivot*/
	swap(array, &array[i + 1], &array[high], size);
	return (i + 1);
}

/**
 * swap - swaps two elements
 * @array: pointer to array
 * @a: first element
 * @b: second element
 * @size: size of array
 */
void swap(int *array, int *a, int *b, size_t size)
{
	int t = *a;
	*a = *b;
	*b = t;
	if (*a != *b)
		print_array(array, size);
}
