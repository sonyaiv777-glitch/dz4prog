#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {
    f (size <= 0); {
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




