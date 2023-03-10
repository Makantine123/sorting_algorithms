#include "sort.h"

/**
 * _swap - Swaps 2 numbers
 * @first: 1st number
 * @second: 2nd number
 * @size: size
 * @arr: array
 * Return: Nothing
 */
void _swap(int *arr, int first, int second, int size)
{
	int temp;

	if (arr[first] != arr[second])
	{
		temp = arr[first];
		arr[first] = arr[second];
		arr[second] = temp;
		print_array(arr, size);
	}
}

/**
 * _partition - Partition function
 * @low: Low number
 * @high: High number
 * @size: Size
 * @arr: array
 * Return: (i + 1)
 */
int _partition(int *arr, int low, int high, size_t size)
{
	int i, j, pvot;

	i = low;
	pvot = arr[high];

	for (j = low; j <= high; j++)
	{
		if (arr[j] < pvot)
		{
			_swap(arr, i, j, size);
			i++;
		}
	}
	_swap(arr, i, high, size);
	return (i);
}

/**
 * _quicksort - Quick sort algorithm
 * @low: low
 * @high: high
 * @arr: Array
 * @size: size
 * Returm: Nothing
 */
void _quicksort(int *arr, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		/**Set partion index-p**/
		p = _partition(arr, low, high, size);
		_quicksort(arr, low, p - 1, size);
		_quicksort(arr, p + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in asc. order using quick sort
 * @array: Array of integers
 * @size: Size
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	_quicksort(array, 0, size - 1, size);
}
