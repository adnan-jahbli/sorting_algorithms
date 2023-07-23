#include "sort.h"
#include <stdio.h>

void quick_sort_recursive(int *arr, int low, int high, int size);

/**
 * quick_sort - Function that sorts an array
 * of integers in ascending order using the
 * quick sort algorithm
 *
 * @arr: Input array
 * @size: Size of the array
 * Return: No return
 */
void quick_sort(int *arr, size_t size)
{
	quick_sort_recursive(arr, 0, (int)size - 1, (int)size);
}

/**
 * quick_sort_recursive - Auxiliary function for the quick_sort function
 * @arr: Input array
 * @low: Index for the first element
 * @high: Index for the last element
 * @size: Size of the array
 * Return: No return
 */
void quick_sort_recursive(int *arr, int low, int high, int size)
{
	int pivot, wall, i;
	int temp;

	if (low < high)
	{
		pivot = high;
		wall = low;
		for (i = low; i < high; i++)
		{
			if (arr[i] < arr[pivot])
			{
				if (i != wall)
				{
					temp = arr[i];
					arr[i] = arr[wall];
					arr[wall] = temp;
					print_array(arr, size);
				}
				wall++;
			}
		}
		if (wall != pivot && arr[wall] != arr[pivot])
		{
			temp = arr[wall];
			arr[wall] = arr[pivot];
			arr[pivot] = temp;
			print_array(arr, size);
		}
		quick_sort_recursive(arr, low, wall - 1, size);
		quick_sort_recursive(arr, wall + 1, high, size);
	}
}
