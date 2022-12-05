/* sortCLParameters, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Sorts Command-Line Parameters lexically and prints them in lowercase letters.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Sortiervorgang aus dem Internet
static int myCompare(const void* a, const void* b)
{
    return strcmp(*(const char**)a, *(const char**)b);
}

void sort(const char* arr[], int n)
{
    qsort(arr, n, sizeof(const char*), myCompare);
}


int main(int argc, char* argv[]) {
    char temp[32];

    if(argc <= 1) {
        printf("Fehler: zu wenige Argumente!\n");
    }

    // Alle Zeichen "kleinschreiben"
    for(int i = 0; i < argc; ++i) {
        for(int j = 0; argv[i][j] != '\0'; ++j) {
            argv[i][j] = tolower(argv[i][j]);
        }
    }

    sort(argv, argc);

    for(int i = 1; i < argc; ++i) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
