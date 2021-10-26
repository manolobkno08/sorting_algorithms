#include "sort.h"
void quick_sort_recursive(int *array, int left_limit, int right_limit);
void swap(int *array, int a, int b);
/**
 * quick_sort - organize an array using the quick sort method
 * @array: array to organize
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
    quick_sort_recursive(array, 0, size - 1);
}

/**
 * quick_sort_recursive - organize an array using the quick sort method
 * @array: array to organize
 * @left_limit: saves the position on the left
 * @right_limit: saves the position on the right
 */
void quick_sort_recursive(int *array, int left_limit, int right_limit)
{
    int pivot, left, right;

    left = left_limit;
    right = right_limit;
    pivot = array[(left + right) / 2];

    do
    {
        while (array[left] < pivot && left < right_limit)
        {
            left++;
        }

        while (pivot < array[right] && right > left_limit)
        {
            right--;
        }
        
        if (left <= right)
        {
            swap(array, left, right);

            left++;
            right--;
        }
        
        
    } while (left <= right);
    
    if (left_limit < right_limit)
    {
        quick_sort_recursive(array, left_limit, right);
    }
    
    if (right_limit > left)
    {
        quick_sort_recursive(array, left, right_limit);
    }   

}
/**
 * swap - swaps values in an array
 * @array: array
 * @a: saves the position to be exchanged
 * @b: saves the position to be exchanged
 */
void swap(int *array, int a, int b)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}