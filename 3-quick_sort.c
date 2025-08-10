#include "sort.h"
/**
 * partition - Helper function to partition the array for quicksort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the sub-array.
 * @high: The ending index of the sub-array.
 * @size: The total size of the array.
 *
 * Return: The index of the pivot after partitioning.
 */
static int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;

	for (int j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				int temp = array[i];

				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		int temp = array[i + 1];

		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quick_sort_recursive - Recursive function to implement quicksort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the sub-array.
 * @high: The ending index of the sub-array.
 * @size: The total size of the array.
 */
static void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(array, low, high, size);

		quick_sort_recursive(array, low, pi - 1, size);
		quick_sort_recursive(array, pi + 1, high, size);
	}
}
/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick sort algorithm.
 * * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
