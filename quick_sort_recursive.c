#include "sort.h"
/**
 * quick_sort_recursive - organize an array using the quick sort method
 * @array: array to organize
 * @left_limit: saves the position on the left
 * @right_limit: saves the position on the right
 */
void quick_sort_recursive(int *array, int left_limit, int right_limit)
{
    int pivot, temp, left, right;

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