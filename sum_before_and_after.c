#include "sum_before_and_after.h"

int sum_before_and_after(int* arr, int len_arr, int first_zero, int last_zero) {
    int i, sum = 0;

    for (i = 0; i < first_zero; i ++) {
        sum += abs(arr[i]);
    }

    for (i = last_zero; i < len_arr; i++) {
        sum += abs(arr[i]);
    }

    return sum;
}