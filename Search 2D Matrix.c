bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int left=0;
    int right=(matrixSize*matrixColSize[0]-1);
    while(left<=right){
    int mid=(left+right)/2;
        if(matrix[mid/matrixColSize[0]][mid%matrixColSize[0]]==target)
        {
            return true;
        }
        else{
            if(matrix[mid/matrixColSize[0]][mid%matrixColSize[0]]>target)
            {
                left=0;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
    } 
    return false;
}
