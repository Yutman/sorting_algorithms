#include "sort.h"

/**
 * swap_elem - swap two integers
 * @a: first integer
 * @b: second integer
 **/
void swap_elem(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sorts an array in ascending order
 * @array: pointer to an array
 * @size: size of the array
 **/
void bubble_sort(int *array, size_t size)
{
	int flag = 0, i, len;

	if (array == NULL || size < 2)
		return;

	len = size - 1;
	while (flag == 0)
	{
		flag = 1;
		for (i = 0; i < len; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_elem(array + i, array + i + 1);
				print_array(array, size);
				flag = 0;
			}
		}
		len--;
	}

}
