#include <stdlib.h>
int* beautifulArray(int n, int* returnSize) {
    *returnSize = n;
    int* result = (int*)malloc(n * sizeof(int));
    result[0] = 1;
    int current_size = 1;
    int* temp = (int*)malloc(n * sizeof(int));
    while (current_size < n) {
        int idx = 0;
        for (int i = 0; i < current_size; i++) {
            int val = 2 * result[i] - 1;
            if (val <= n) {
                temp[idx++] = val;
            }
        }
        for (int i = 0; i < current_size; i++) {
            int val = 2 * result[i];
            if (val <= n) {
                temp[idx++] = val;
            }
        }
        current_size = idx;
        for (int i = 0; i < current_size; i++) {
            result[i] = temp[i];
        }
    }
    
    free(temp);
    return result;
}
