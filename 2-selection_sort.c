#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - Sorts an array of integers in ascending
 * order using Insertion sorting..
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Description: The function implements the Selection Sort algorithm
 * to sort the array of integers in ascending order. After each swap,
 * it prints the array to show the sorting progress.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, min_idx;
	int temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}

		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;

			/* Print the array after each swap */
			for (k = 0; k < size; k++)
			{
				printf("%d", array[k]);
				if (k < size - 1)
					printf(", ");
			}
			printf("\n");
		}
	}
}
