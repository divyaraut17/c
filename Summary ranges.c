/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    if (numsSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    char** result = (char**)malloc(numsSize * sizeof(char*));
    int start = 0, index = 0;

    for (int i = 1; i <= numsSize; i++) {
        if (i == numsSize || nums[i] != nums[i - 1] + 1) {
            if (start == i - 1) {
                // Single number
                result[index] = (char*)malloc(20 * sizeof(char)); // 20 is enough for the number
                sprintf(result[index], "%d", nums[start]);
            } else {
                // Range
                result[index] = (char*)malloc(50 * sizeof(char)); // Allocate space for range
                sprintf(result[index], "%d->%d", nums[start], nums[i - 1]);
            }
            start = i;
            index++;
        }
    }

    *returnSize = index;
    return result;
}
