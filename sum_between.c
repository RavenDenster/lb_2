#include <stdlib.h>
#include "sum_between.h"

int sum_between(int* arr, int len_arr, int first_zero, int last_zero) {
    int i, sum = 0;

    for (i = first_zero; i < last_zero; i++) {
        sum += abs(arr[i]);
    }

    return sum;
}