void moveZeroes(int* nums, int numsSize) {
   int lastNonZeroIndex = 0;  // Pointer to track the position to move non-zero elements to

    // Traverse through the array
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            // Move non-zero element to the lastNonZeroIndex position
            nums[lastNonZeroIndex] = nums[i];
            if (i != lastNonZeroIndex) {
                // Only set the current index to 0 if it's not the same as lastNonZeroIndex
                nums[i] = 0;
            }
            // Increment the lastNonZeroIndex
            lastNonZeroIndex++;
        }
    } 
}
