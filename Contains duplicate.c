bool containsDuplicate(int* nums, int numsSize) {
    if (numsSize <= 1) return false;

    // Find the maximum value
    int max = nums[0], min = nums[0];
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] > max) {
            max = nums[i];
        }
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    int range = max - min + 1;

    // Allocate hash table
    int* H = (int*)calloc(range, sizeof(int));
    if (!H) return false;

    // Populate and check for duplicates
    for (int i = 0; i < numsSize; ++i) {
        int index = nums[i] - min;
        H[index]++;
        if (H[index] > 1) {
            free(H);
            return true;
        }
    }

    free(H);
    return false;
}
