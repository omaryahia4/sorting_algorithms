#include "sort.h"
/**
 * selection_sort - function that sort an array with selection
 *@array: array of int
 *@size: size of the array
 *Return: 0
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_index, tmp;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			min_index = j;
		}
		if (min_index != i)
	{
		tmp = array[i];
		array[i] = array[min_index];
		array[min_index] = tmp;
		print_array(array, size);
	}
	}
}
