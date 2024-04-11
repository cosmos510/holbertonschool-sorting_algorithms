#include "sort.h"

/* */
/**
* swap_int - main function that swaps the values of two integers.
* @a: input number
* @b: should equal at a
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
 * _qsort - helper function for quick sort
 * @array: input arrray
 * @low: index for the first element
 * @high: index for the last element
 * @size: size of the array
 * Return: no return
 */
void _qsort(int *array, int low, int high, int size)
{
	int pivot_i, partition_i, i;

	if (low < high)
	{
		pivot_i = high;
		partition_i = low;
		for (i = low; i < high; i++)
		{
			if (array[i] < array[pivot_i])
			{
				if (i != partition_i)
				{
					swap_int(array + i, array + partition_i);
					print_array(array, size);
				}
				partition_i++;
			}
		}
		if (partition_i != pivot_i && array[partition_i] != array[pivot_i])
		{
			swap_int(array + partition_i, array + pivot_i);
			print_array(array, size);
		}
		_qsort(array, low, partition_i - 1, size);
		_qsort(array, partition_i + 1, high, size);
	}
}

/* */
/**
* quick_sort - function that sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* @array: array to sort the list
* @size:size of the array
*/
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}
