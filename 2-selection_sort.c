#include "sort.h"
/* */
/**
* selection_sort - function that sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
* @array: array to sort the list
* @size:size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i,j;
	int minIndex;
	int temp;
	for ( i = 0; i < size - 1; i++)
	{
    	minIndex = i;
    	for ( j = i + 1; j < size; j++)
    	{
        	if (array[j] < array[minIndex])
        	{
        	minIndex = j;
        	}
    	}
    	temp = array[i];
    	array[i] = array[minIndex];
    	array[minIndex] = temp;
    	print_array(array, size);
	}
}
