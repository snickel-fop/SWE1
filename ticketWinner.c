/* ticketWinner, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Determines the winner of today's lottery.
 */

#include <stdio.h>

int StrLength(char* Str) {//Funktion, um die Länge eines Strings zu bestimmen (Ohne '\0')
    int i;
    for(i = 0; i > -1; ++i) {
        if(Str[i] == '\0') {break;}
    }
    return i;
}

int compareStr(char* str1, char* str2) {//Funktion, um zwei Strings miteinander zu vergleichen (benötigt StrLength(char* Str))
    int equal = 1, len1 = StrLength(str1), len2 = StrLength(str2);
    if(len1 != len2) {return 0;}
    for(int i = 0; i < len1; i++) { //Durchlaufen der Arrays Zeichen für Zeichen
        if(str1[i] != str2[i]) { //Vergleichen beider Arrays an jeweils der gleichen Position
            equal = 0; //Setzen der Variable bei ungleichem Vorkommnis
            break;
        }
    }
    return equal;
}

int main()
{
	//Einlesen der Daten
    char vName[32], nName[32];
    int zahl = 0;
    printf("Geben sie den Vornamen ein: ");
    scanf("%s", &vName);
    printf("Geben sie den Nachnamen ein: ");
    scanf("%s", &nName);
    printf("Geben sie ihre Glueckszahl ein: ");
    scanf("%d", &zahl);
	//Vergleich mittels Funktionen und Rückgabe der Meldung
    if(compareStr(vName, "Peter") && compareStr(nName, "Haber") && zahl == 1234) {
        printf("Herzlichen Glueckwunsch, sie haben einen Peter gewonnen!\n");
    } else {
        printf("Schade, sie haben keinen Peter gewonnen!\n");
    }
    return 0;
}
