/* basicCalculator, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Calculates the result of an arithmetic equation consisting of two numbers
 */

#include <stdio.h>

int main()
{
    char operator = ' '; //Platzhalter für den Operator
    int zahl1 = 0, zahl2 = 0; //Platzhalter für die eingegebenen Zahlen
    double result = 0.0;
    printf("Bitte Rechnung im Format 'ZAHL [OPERATOR] ZAHL' eingeben: ");
    scanf("%d %c %d", &zahl1, &operator, &zahl2);
    switch (operator) { //Ermitteln der Operation und dementsprechendes Berechnen
        case '+': result = zahl1 + zahl2; break;
        case '-': result = zahl1 - zahl2; break;
        case '*': result = zahl1 * zahl2; break;
        case '/': result = (double) zahl1 / (double) zahl2; break;
        default: printf("Unbekannter Operator! Programmende.\n"); return -1;
    }
    printf("Das Ergebnis lautet (auf zwei Stellen gerundet): %.2lf\n", result); //Ausgabe des Ergebnisses
    return 0;
}
