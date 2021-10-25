#include "sort.h"
/**
 * quick_sort - organize an array using the quick sort method
 * @array: array to organize
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
quick_sort_recursive(array, 0, size - 1);
}