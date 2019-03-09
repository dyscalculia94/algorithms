#include "helper.h"

void print_array(int32_t *array, size_t len)
{
	printf("%d", array[0]);
	for (size_t i = 1; i < len; i++) {
		printf(" %d", array[i]);
	}
}
