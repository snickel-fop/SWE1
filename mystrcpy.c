/* mystrcpy, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Copies one string into another and prints out both of them afterwards.
 */

#include <stdio.h>

int main()
{
	//Eingabe der Daten
    char str1[128], str2[128];
    int c1 = 0;
    printf("Geben sie den ersten String ein: ");
    for(c1 = 0; c1 > -1; ++c1) { //Einlesen der einzelnen Zeichen und Austauschen des Newline-Chars durch ein Stringende
        str1[c1] = getchar();
        if(str1[c1] == '\n') {
            str1[c1] = '\0';
            break;
        }
    }

    for(int i = 0; i < c1 + 1; ++i) { //Schrittweises Kopieren der Zeichen aus str1 in str2
        str2[i] = str1[i];
    }

    printf("String 1: %s\n", str1); //Ausgeben beider Ergebnisse
    printf("String 2: %s\n", str2);

    return 0;
}
