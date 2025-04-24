/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) {
            int** result = (int**)malloc(sizeof(int*) * imageSize);
    *returnColumnSizes = (int*)malloc(sizeof(int) * imageSize);
    
    // Set the return size to imageSize
    *returnSize = imageSize;
    
    // Iterate through each row of the image
    for (int i = 0; i < imageSize; i++) {
        // Allocate memory for each row in the result
        result[i] = (int*)malloc(sizeof(int) * imageColSize[i]);
        (*returnColumnSizes)[i] = imageColSize[i];
        
        // Flip and invert the image in the current row
        int left = 0;
        int right = imageColSize[i] - 1;
        while (left <= right) {
            // Flip the element by swapping
            int temp = image[i][left];
            image[i][left] = image[i][right];
            image[i][right] = temp;
            
            // Invert the values after swapping
            result[i][left] = image[i][left] == 1 ? 0 : 1;
            result[i][right] = image[i][right] == 1 ? 0 : 1;
            
            // Move towards the center of the row
            left++;
            right--;
        }
    }
    
    return result;

}
