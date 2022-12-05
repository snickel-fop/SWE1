/* mystrcat, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Appends one string to a second one given by stdin.
 */

#include <stdio.h>

int main()
{
	//Einlesen der Daten
    char str1[128], str2[128], result[256];
    int c1 = 0, c2 = 0;
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

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    int counter;
    for(counter = 0; counter > -1; ++counter) { //Befüllen des Ergebnisstrings mit dem Inhalt von str1 (außer letztes Zeichen - Steuerzeichen \0)
        if(str1[counter] == '\0') {
            break;
        }
        result[counter] = str1[counter];
    }
    for(int i = 0; i < c2; ++i) { //Befüllung fortsetzen mit counter und aber dem Beginn des zweiten Strings
        result[counter] = str2[i];
        counter++;
    }
    result[c1+c2] = '\0'; //Abschließen des neuen Strings
    printf("Ergebnis: %s\n", result); //Ausgabe des Ergebnisses

    return 0;
}
