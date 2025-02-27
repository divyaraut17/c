void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
         int i = m - 1;  // Pointer to last element of nums1's valid part
    int j = n - 1;  // Pointer to last element of nums2
    int k = m + n - 1;  // Pointer to last position of nums1

    // Merge nums1 and nums2 starting from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are remaining elements in nums2, copy them
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }

}
