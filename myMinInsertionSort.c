/* myMinInsertionSort, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Sorts array containing 10 randomly generated numbers ascendingly
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortFnc(const void *a, const void *b) {
    if(*(int*)a > *(int*)b) {
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    srand(time(NULL)); //Zufallsgenerator mit der aktuellen Zeit als Seed initialisieren.
    int array[10];
    printf("Array vor der Sortierung: ");
    for(int i = 0; i < 10; ++i) { //Array mit 10 Zufallszahlen befüllen und ausgeben
        array[i] = rand()%100;
        printf("%d ", array[i]);
    }
    qsort(array, 10, sizeof(int), sortFnc); //Array mit sortFnc sortieren
    printf("\nArray nach der Sortierung: ");
    for(int i = 0; i < 10; ++i) { //Sortiertes Array ausgeben
        printf("%d ", array[i]);
    }
    printf("\n");
}
