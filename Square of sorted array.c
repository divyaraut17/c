/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
        int* result = (int*)malloc(numsSize * sizeof(int));
    
    // Initialize pointers
    int left = 0, right = numsSize - 1, index = numsSize - 1;
    
    // Process the array using two pointers
    while (left <= right) {
        // Compare the absolute values of nums[left] and nums[right]
        if (abs(nums[left]) > abs(nums[right])) {
            result[index] = nums[left] * nums[left];
            left++;
        } else {
            result[index] = nums[right] * nums[right];
            right--;
        }
        index--;
    }
    
    // Set the return size
    *returnSize = numsSize;
    
    return result;

}
