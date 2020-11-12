// An Inplace function to rotate a N x N matrix 
// by 90 degrees in anti-clockwise direction 
void rotateMatrix(int mat[][N]) 
{ 
    // Consider all squares one by one 
    for (int i = 0; i < N / 2; i++) 
    { 
        // Consider elements in group of 4 in 
        // current square 
        for (int j = i; j < N-i-1; j++) 
        { 
            // store current cell in temp variable 
            int temp = mat[i][j]; 

            // move values from right to top 
            mat[i][j] = mat[j][N-1-i]; 

            // move values from bottom to right 
            mat[j][N-1-i] = mat[N-1-i][N-1-j]; 

            // move values from left to bottom 
            mat[N-1-i][N-1-j] = mat[N-1-j][i]; 

            // assign temp to left 
            mat[N-1-j][i] = temp; 
        } 
    } 
} 

