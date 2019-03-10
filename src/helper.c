#include "helper.h"

void print_array(int32_t *array, size_t len)
{
	printf("%d", array[0]);
	for (size_t i = 1; i < len; i++)
		printf(" %d", array[i]);
}

int32_t * generate_array(size_t len)
{
	int32_t *temp = malloc(len * sizeof(int32_t));

	srand(time(NULL));
	for (size_t i = 0; i < len; i++)
		temp[i] = rand() % 10000;

	return temp;
}
