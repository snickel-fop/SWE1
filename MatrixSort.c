/* MatrixSort, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Sorts a Matrix of int ascendingly
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortFnc(const void *a, const void *b) {
    if(*(int*)a > *(int*)b) {
        return -1;
    }
    else {
        return 1;
    }
}

int main() {
    const int dim1 = 8, dim2 = 8; //Festlegen der Dimensionen der Matrix
    int matrix[dim1][dim2];

    int tempCount = 0;
    int temp[256];
    srand(time(NULL));

    printf("Matrix vor der Sortierung: \n");
    for(int i = 0; i < dim1; ++i) {
        for(int j = 0; j < dim2; ++j) {
            matrix[i][j] = rand()%10; //Matrix mit Zufallszahlen befüllen (1)
            printf("%d ", matrix[i][j]); //Matrix ausgeben (2)
            temp[tempCount++] = matrix[i][j]; //Matrix in einen sortierbaren Strang zerlegen (3)
        }
        printf("\n");
    }
    printf("\n");

    tempCount = 0;
    qsort(temp, dim1*dim2, sizeof(int), sortFnc); //Sortieren des Strangs
    printf("Matrix nach der Sortierung: \n");
    for(int i = 0; i < dim1; ++i) {
        for(int j = 0; j < dim2; ++j) {
            matrix[i][j] = temp[tempCount++]; //sortierten Strang wieder in Matrix konvertieren
            printf("%d ", matrix[i][j]); //sortierte Matrix ausgeben
        }
        printf("\n");
    }
    printf("\n");
}
