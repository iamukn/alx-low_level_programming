#include "search_algos.h"
/**
 * linear_search - The prototype function
 * @array: The sorted arrays
 * @size: The size of the array
 * @value: Value to search
 * Return: Always 0
 */

int linear_search(int *array, size_t size, int value)
{

size_t i;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%li] = [%i]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
