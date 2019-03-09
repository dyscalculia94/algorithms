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

void selection_sort(int32_t *array, size_t len)
{
	for (size_t i = 0; i < len - 1; i++) {
		size_t idx = i;
		for (size_t j = i; j < len; j++) {
			if (array[j] < array[idx]) {
				idx = j;
			}
		}

		SWAP(array[i], array[idx]);
	}
}
