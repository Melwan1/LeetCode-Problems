/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stddef.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int index = 0; index < numsSize; index++)
    {
        for (int other = 0; other < numsSize; other++)
        {
            if (index != other && (nums[index] + nums[other] == target))
            {
                int *return_array = malloc(sizeof(int) * 2);
                return_array[0] = index;
                return_array[1] = other;
                *returnSize = 2;
                return return_array;
            }
        }
    }
    return NULL;
}
