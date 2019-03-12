#include "search.h"

int32_t linear_search(int32_t *array, size_t len, int32_t value)
{
	for (size_t i = 0; i < len; i++)
		if (array[i] == value)
			return i;

	return -1;
}

int32_t binary_search(int32_t *array, size_t start, size_t end, int32_t value)
{
	if (end - start == 1)
		return -1;

	int idx = (start + end) / 2;

	if (array[idx] == value)
		return idx;
	else if (array[idx] > value)
		return binary_search(array, start, idx, value);
	else
		return binary_search(array, idx, end, value);
}
