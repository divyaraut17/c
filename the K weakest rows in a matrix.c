/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 typedef struct {
    int index;
    int strength;
} Row;

// Comparison function for qsort to sort rows by their strength and index
int compareRows(const void* a, const void* b) {
    Row* rowA = (Row*)a;
    Row* rowB = (Row*)b;
    
    // Compare by strength (number of 1s in the row)
    if (rowA->strength != rowB->strength) {
        return rowA->strength - rowB->strength;
    }
    
    // If strengths are equal, compare by row index
    return rowA->index - rowB->index;
}

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize) {
     Row* rows = (Row*)malloc(matSize * sizeof(Row));
    
    // Calculate the strength of each row
    for (int i = 0; i < matSize; i++) {
        int count = 0;
        for (int j = 0; j < matColSize[i]; j++) {
            if (mat[i][j] == 1) {
                count++;
            } else {
                break;  // Stop counting as soon as a 0 is found
            }
        }
        rows[i].index = i;        // Store the row index
        rows[i].strength = count;  // Store the number of 1s (strength)
    }

    // Sort the rows using the compareRows function
    qsort(rows, matSize, sizeof(Row), compareRows);

    // Create the result array to store the indices of the k weakest rows
    int* result = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) {
        result[i] = rows[i].index;  // Store the index of the weakest rows
    }

    // Set the return size
    *returnSize = k;

    // Free the memory for the rows array
    free(rows);

    return result;
}
