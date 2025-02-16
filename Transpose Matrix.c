/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int** result=(int**)malloc((*matrixColSize)*sizeof(int*));
 for(int i=0 ;i<*matrixColSize;i++)
{
    result[i]=(int*)malloc(matrixSize*sizeof(int));
}
for(int i=0;i<matrixSize;i++)
{
    for(int j=0;j<*matrixColSize;++j)
    {
        result[j][i]=matrix[i][j];
    }
}
*returnSize=*matrixColSize;
*returnColumnSizes=(int*)malloc(*returnSize* sizeof(int));

for(int i=0;i<*returnSize;++i)
{
    (*returnColumnSizes)[i]=matrixSize;
}
return result;

}
