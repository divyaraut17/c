/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes) {
    int val = image[sr][sc];
    if (val != color) {
        int q[100000]; //...r,c,r,c
        int qc = 0;
        q[qc++] = sr;
        q[qc++] = sc;

        int start = 0;
        while(qc - start > 0) {

            int tmp = (qc - start) / 2;
            for (int i = 0; i < tmp; ++i) {
                int r = q[start++];
                int c = q[start++];

                image[r][c] = color;
                
                if (r - 1 >= 0) { if(image[r-1][c] == val) { q[qc++] = r - 1; q[qc++] = c; }}
                if (r + 1 < imageSize) { if(image[r+1][c] == val) {  q[qc++] = r + 1; q[qc++] = c; }}
                if (c - 1 >= 0) { if(image[r][c - 1] == val) { q[qc++] = r; q[qc++] = c - 1; }}
                if (c + 1 < *imageColSize) { if(image[r][c + 1] == val) { q[qc++] = r; q[qc++] = c + 1; }}
                
            }

        }

    }

    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;
    return image;
}
