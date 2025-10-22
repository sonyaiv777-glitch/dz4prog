#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {
    if (size <= 0) {
        return 0;
    }

    int maxs = nums[0];   
    int current_sum = nums[0]; 

    for (int i = 1; i < size; i++) {
        
        if (current_sum < 0) {
            current_sum = nums[i];
        } else {
            current_sum += nums[i];
        }

        if (current_sum > maxs) {
            maxs = current_sum;
        }
    }

    return maxs;
}

int length_of_lis(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int len = 1;
    int max_len = 1;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] < nums[i + 1]) {
            len++;
        } else {
            if (len > max_len) {
                max_len = len;
            }
            len = 1;
        }
    }

    if (len > max_len) {
        max_len = len;
    }

    return max_len;
}



