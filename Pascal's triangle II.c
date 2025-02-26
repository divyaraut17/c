/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int* row = (int*)malloc((rowIndex + 1) * sizeof(int));
    row[0] = 1;
    
    for (int j = 1; j <= rowIndex; j++) {
        row[j] = (long long)row[j - 1] * (rowIndex - j + 1) / j;
    }
    
    *returnSize = rowIndex + 1;
    return row;
}
