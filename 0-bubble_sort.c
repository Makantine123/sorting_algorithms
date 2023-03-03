#include "sort.h"
/**
 * bubble_sort - Functions sorts an array of integers using bubble sort
 * @array: pointer to array of integers
 * @size: size input
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
    unsigned int i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size -i - 1; j++)
        {
            if ( array[j] > array[j + 1])
            {
                array[j], array[j + 1] = array[j + 1], array[j]
            }
        }
    }
}
