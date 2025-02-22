bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
   for(int x_index = matrixSize-1;x_index > 0;x_index--){
        for(int y_index = *matrixColSize-1;y_index > 0;y_index--){
            if(x_index-1 >= 0 && y_index-1 >= 0 && matrix[x_index][y_index] != matrix[x_index-1][y_index-1]){
                return false;
            }
        }
    }
    return true; 
}
