/* palindromeCheck, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Checks whether a given string is a palindrome.
 */

#include <stdio.h>

int StrLength(char* Str) { //Funktion, um die Länge eines Strings zu bestimmen (Ohne '\0')
    int i;
    for(i = 0; i > -1; ++i) {
        if(Str[i] == '\0') {break;}
    }
    return i;
}

int main()
{
    //Daten einlesen
    char input[64];
    int len, result = 0;
    printf("Bitte geben sie den zu ueberpruefenden String ein: ");
    scanf("%s", &input);
    //Prüfen, ob das letzte Zeichen des Strings dem ersten entspricht, das zweite dem vorletzten, etc...
    len = StrLength(input) - 1;
    for(int i = 0; i < len; ++i) {
        if(input[i] != input[len-i]) {
            result = -1;
        }
    }
    //Ausgabe des Ergebnisses
    switch (result) {
        case -1: printf("Kein Palindrom!\n"); break;
        case 0: printf("Ein Palindrom, wie schoen!\n"); break;
    }
    return 0;
}
