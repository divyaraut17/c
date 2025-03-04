/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
   int* result = (int*)malloc(numsSize * sizeof(int));
    
    // Initialize the first element of the result array
    result[0] = nums[0];
    
    // Compute running sum for the rest of the elements
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }
    
    // Set the return size to the size of the input array
    *returnSize = numsSize;
    
    // Return the result array
    return result; 
}
