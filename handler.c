#include <stdio.h>

#include "handler.h"
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_before_and_after.h"
#include "sum_between.h"

void tasks(int *arr, int len_arr, int value)
{

    int first_zero = index_first_zero(arr, len_arr);
    int last_zero = index_last_zero(arr, len_arr);

    switch (value)
    {
    case 0:
        printf("%d", first_zero);
        break;
    case 1:
        printf("%d", last_zero);
        break;
    case 2:
        printf("%d", sum_between(arr, len_arr, first_zero, last_zero));
        break;
    case 3:
        printf("%d", sum_before_and_after(arr, len_arr, first_zero, last_zero));
        break;
    default:
        puts("Данные некорректны");
        break;
    }
}