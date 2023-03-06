#include "sort.h"

void _swap(int *arr, int fist, int second, int size);
void _quicksort(int *arr, int low, int high, size_t size);


/**
 * _swap - Swaps 2 numbers
 * @first: 1st number
 * @second: 2nd number
 * @size: size
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
 * Return: (i + 1)
 */
int _partition(int *arr, int low, int high, size_t size)
{
	int i, j, pivot;

	i = low;
	pivot = arr[high];

	for (j = low; j <= high; j++)
	{
		if (arr[j] <= pivot)
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
 * Returm: Nothing
 */
void _quicksort(int arr, int low, int high)
{
	int pi;

	if (low < high)
	{
		//Set partion index-pi
		pi = _partition(arr, low, high);
		_quicksort(arr, low, pi - 1);
		_quicksort(arr, pi + 1, high);
		print_ar
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
	int low, high;
	if (size < 2)
	{
		return;
	}
	low = 0;
	high = size - 1;
	_quicksort(array, low, high);
}
