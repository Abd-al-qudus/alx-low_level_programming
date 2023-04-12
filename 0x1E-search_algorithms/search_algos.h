#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__

/* include standard i/o library*/
#include <stdio.h>

/* function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
