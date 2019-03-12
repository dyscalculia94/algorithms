#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "helper.h"

void insertion_sort(int32_t *array, size_t len);

void selection_sort(int32_t *array, size_t len);

void bubble_sort(int32_t *array, size_t len);

void merge_sort(int32_t *array, size_t start, size_t end);

void quick_sort(int32_t *array, size_t start, size_t end);

#endif
