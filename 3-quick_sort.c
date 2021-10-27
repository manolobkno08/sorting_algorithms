#include "sort.h"
/*function prototypes*/
int partition(int *array, int left, int right, size_t size);
void qs(int *array, int left, int right, size_t size);
void swap(int *array, int a, int b, size_t size);

/*function statements*/
/**
 * quick_sort - main function, sorts using the fast sorting algorithm
 * @array: array to sort
 * @size: array length
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
qs(array, 0, size - 1, size);
}

/**
  * qs - quick sort function
  * @array: array to be sorted
  * @left: left edge of the array
  * @right: right edge of the array
  * @size: size of the array
  */

void qs(int *array, int left, int right, size_t size)
{
size_t pivot = 0;

if (left < right)
{
pivot = partition(array, left, right, size);
if (pivot > 0)
qs(array, left, pivot - 1, size);
if (pivot != size)
qs(array, pivot + 1, right, size);
}
}

/**
  * partition - fix the position of the elements
  * @array: array to be sorted
  * @left: left edge of the array
  * @right: right edge of the array
  * @size: size of the array
  * Return: the index of the pivot
  */

int partition(int *array, int left, int right, size_t size)
{
int pivot = array[right];
int i = left - 1, j;

for (j = left; j < right; j++)
{
if (array[j] <= pivot)
{
i++;
if (j != i)
{
swap(array, j, i, size);
}
}
}
if (pivot < array[i + 1])
{
swap(array, i, right, size);
}
return (i + 1);
}
/**
 * swap - swaps values in an array
 * @array: array
 * @a: saves the position to be exchanged
 * @b: saves the position to be exchanged
 */

void swap(int *array, int a, int b, size_t size)
{
int temp = array[a + 1];
array[a + 1] = array[b];
array[b] = temp;
print_array(array, size);
}