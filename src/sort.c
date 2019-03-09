#include "sort.h"

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
