#include <stdlib.h>

int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    *returnSize = 1 << numsSize;
    int** result = (int**)malloc(sizeof(int*) * (*returnSize));
    *returnColumnSizes = (int*)malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < *returnSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if ((i >> j) & 1) {
                count++;
            }
        }
        (*returnColumnSizes)[i] = count;
        result[i] = (int*)malloc(sizeof(int) * count);
        int index = 0;
        for (int j = 0; j < numsSize; j++) {
            if ((i >> j) & 1) {
                result[i][index++] = nums[j];
            }
        }
    }
    
    return result;
}
