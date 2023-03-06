#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in asc. order using
 * selection sort algorithm
 * @array: Array of integers
 * @size: Size
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, minidx, temp;

	for (i = 0; i < size - 1; i++)
	{
		minidx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minidx])
			{
				minidx = j;
			}
			if (minidx != i)
			{
				temp = array[minidx];
				array[minidx] = array[i];
				print_array(array, size);
				array[i] = temp;
			}
		}
	}
}

