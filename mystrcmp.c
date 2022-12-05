/* mystrcmp, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Compares two strings given by the user via stdin
 */

#include <stdio.h>

int main()
{
	//Einlesen der Daten
    char str1[32], str2[32];
    int c1 = 0, c2 = 0, equal = 1;
    printf("Geben sie den ersten String ein: ");
    for(c1 = 0; c1 > -1; ++c1) { //Einlesen der einzelnen Zeichen und Austauschen des Newline-Chars durch ein Stringende
        str1[c1] = getchar();
        if(str1[c1] == '\n') {
            str1[c1] = '\0';
            break;
        }
    }
    printf("Geben sie den zweiten String ein: ");
    for(c2 = 0; c2 > -1; ++c2) { //Einlesen der einzelnen Zeichen und Austauschen des Newline-Chars durch ein Stringende
        str2[c2] = getchar();
        if(str2[c2] == '\n') {
            str2[c2] = '\0';
            break;
        }
    }
    if(c1 != c2) { //Vorsortierung auf gleiche Länge
        printf("Strings haben unterschiedliche Laenge, koennen daher nicht identisch sein (vorsortiert)!\n");
        return -1;
    }
    else {
        for(int i = 0; i < c1; i++) { //Durchlaufen der Arrays Zeichen für Zeichen
            if(str1[i] != str2[i]) { //Vergleichen beider Arrays an jeweils der gleichen Position
                equal = 0; //Setzen der Variable bei ungleichem Vorkommnis
                break;
            }
        }
        switch (equal) { //Ausgeben des Ergebnisses
            case 1: printf("Strings sind identisch!\n"); break;
            case 0: printf("Strings sind nicht identisch!\n"); break;
        }
    }
    return 0;
}
