#include "sort.h"

/**
 * shell_sort - Sort an array of integers in asc. order using Shell sort
 * @array: Array
 * @size: size
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	gap = 1;

	while (gap < size / 3)
	{
		gap = (gap * 3) + 1;
	}

	while (gap > 0)
	{
		for (j = gap; j < size; j++)
		{
			temp = array[j];
			i = j;
			while (i > gap - 1 && array[i - gap] >= temp)
			{
				array[i] = array[i - gap];
				i = i - gap;
			}
			array[i] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
