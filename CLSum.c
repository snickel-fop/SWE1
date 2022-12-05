/* CLSum, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Returns the sum of all numbers given as Command Line Arguments
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int ergebnis = 0;
    for(int i = 0; i < argc; ++i) {
        ergebnis = ergebnis + atoi(argv[i]);
    }
    printf("Summe der uebergebenen Zahlen: %d\n", ergebnis);
}
