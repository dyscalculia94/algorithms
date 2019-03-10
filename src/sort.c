#include "sort.h"

/*******************************************************************************
 *                              PRIVATE FUNCTIONS                              *
 ******************************************************************************/

static void merge(int32_t *array, size_t p, size_t q, size_t r)
{
	size_t n1 = q - p, n2 = r - q;
	int32_t *arr1 = malloc(n1 * sizeof(int32_t));
	int32_t *arr2 = malloc(n2 * sizeof(int32_t));

	for (size_t i = 0; i < n1; i++)
		arr1[i] = array[p + i];
	for (size_t i = 0; i < n2; i++)
		arr2[i] = array[q + i];

	size_t j = 0, k = 0;
	for (size_t i = 0; i < (r - p); i++) {
		int32_t temp;
		if (j < n1 && k < n2) {
			if (arr1[j] <= arr2[k])
				temp = arr1[j++];
			else
				temp = arr2[k++];
		}
		else if (j < n1)
			temp = arr1[j++];
		else
			temp = arr2[k++];
		array[p + i] = temp;
	}

	free(arr2);
	free(arr1);
}

/*******************************************************************************
 *                              PUBLIC FUNCTIONS                               *
 ******************************************************************************/

void insertion_sort(int32_t *array, size_t len)
{
	for (size_t i = 1; i < len; i++) {
		int32_t key = array[i];
		int32_t j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}

void selection_sort(int32_t *array, size_t len)
{
	for (size_t i = 0; i < len - 1; i++) {
		size_t idx = i;
		for (size_t j = i; j < len; j++)
			if (array[j] < array[idx])
				idx = j;

		SWAP(array[i], array[idx]);
	}
}

void bubble_sort(int32_t *array, size_t len)
{
	for (size_t i = 0; i < len - 1; i++)
		for (size_t j = i + 1; j < len; j++)
			if (array[i] > array[j])
				SWAP(array[i], array[j]);
}

void merge_sort(int32_t *array, size_t start, size_t end)
{
	if (end - start < 2)
		return ;
	merge_sort(array, start, (end + start) / 2);
	merge_sort(array, (end + start) / 2, end);
	merge(array, start, (end + start) / 2, end);
}
