int removeElement(int* nums, int numsSize, int val) {
    int j = 0; // Pointer for placing elements that are not 'val'

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];  // Place the current element at the "next available" position
            j++;  // Increment the position for the next non-val element
        }
    }

    return j;  
}
