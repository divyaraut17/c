/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int* rowMins = (int*)malloc(matrixSize * sizeof(int));
    for (int i = 0; i < matrixSize; i++) {
        int minVal = matrix[i][0];
        for (int j = 1; j < matrixColSize[i]; j++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
            }
        }
        rowMins[i] = minVal;
    }

    // Step 2: Find the maximum values in each column
    int* colMaxs = (int*)malloc(matrixColSize[0] * sizeof(int));
    for (int j = 0; j < matrixColSize[0]; j++) {
        int maxVal = matrix[0][j];
        for (int i = 1; i < matrixSize; i++) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
        colMaxs[j] = maxVal;
    }

    // Step 3: Find all lucky numbers
    int* luckyNumbers = (int*)malloc(matrixSize * matrixColSize[0] * sizeof(int)); // Max possible lucky numbers
    int count = 0;

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            if (matrix[i][j] == rowMins[i] && matrix[i][j] == colMaxs[j]) {
                luckyNumbers[count++] = matrix[i][j];
            }
        }
    }

    // Step 4: Return the result
    *returnSize = count;
    luckyNumbers = (int*)realloc(luckyNumbers, count * sizeof(int));  // Resize to the correct size
    free(rowMins);
    free(colMaxs);
    
    return luckyNumbers;

}
