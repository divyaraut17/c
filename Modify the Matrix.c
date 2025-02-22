/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** modifiedMatrix(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
   for(int i=0;i<matrixSize;i++){
        for(int j=0;j<*matrixColSize;j++){
            if(matrix[i][j]==-1){
                int max=-1;
                for(int k=0;k<matrixSize;k++){
                    if(matrix[k][j]>max) 
                       max =matrix[k][j];
                }
                matrix[i][j]=max;
            }
        }
    }
    int *arr=(int*)malloc(matrixSize*sizeof(int));
    for(int i=0;i<matrixSize;i++){
        arr[i]=*matrixColSize;
    }
    *returnColumnSizes = arr;
    *returnSize=matrixSize;
    return matrix;
 
}
