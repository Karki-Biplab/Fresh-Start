#include <stdio.h>
void printMatrix(int mat[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int result[2][3];
    
    // Matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    printf("Matrix Addition Result:\n");
    printMatrix(result, 2);
    return 0;
}