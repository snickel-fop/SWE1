/* EinheitsMatrix, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Wandelt eine zweidimensionale Matrix in eine Einheitsmatrix um
 */

#include <stdio.h>
#include <stdlib.h>

void einheitsMatrix(int len, int matrix[][len]) {
    int tmp = 0;
    for(int i = 0; i < len; ++i) {
        for(int j = 0; j < len; ++j) {
            matrix[i][j] = 0;
        }
        matrix[i][tmp++] = 1;
    }
}
void printMatrix(int len, int matrix[][len]) {
    for(int i = 0; i < len; ++i) {
        for(int j = 0; j < len; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main() {
    int arr[3][3] = {{3,2,1},{2,3,4},{5,2,4}};
    printf("Matrix vorher: \n");
    printMatrix(3, arr);
    einheitsMatrix(3, arr);
    printf("Matrix nachher: \n");
    printMatrix(3, arr);
}
