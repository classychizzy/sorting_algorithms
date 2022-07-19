#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort- a function that uses bubble sort to
 * sort an array in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag, temp;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
