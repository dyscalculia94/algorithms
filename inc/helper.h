#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

// TODO: Optimise the swap (really low priority)
#define SWAP(x, y)	\
do {				\
	int temp = (x);	\
	(x) = (y);		\
	(y) = temp;		\
} while (0);		\

void print_array(int32_t *array, size_t len);

int32_t * generate_array(size_t len);

#endif
