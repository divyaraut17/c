int pivotIndex(int* nums, int numsSize) {
    // int left = 0, right = numsSize-1;
    int sum = 0;
    int sum2 = 0;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
    }

    for(int i = 0; i < numsSize; i++){
        if(sum - nums[i] == sum2){
            return i;
        }
        sum -= nums[i];
        sum2 += nums[i];
    }

    return -1;
}
