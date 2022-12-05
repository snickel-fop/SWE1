/*
*	Binaere Zeichenkette in Dezimalzahl umwandeln
*/

#include <stdio.h>

int main() {
	int input, save;
	
	printf("--- Binaere Zahl -> Dezimalzahl\nEingabe Binaerzahl: ");
	scanf("%d", &input);
	save = input;
	
	int stelle = 1, rest, pot = 1, dec = 0;
	while(input > 0) {
		rest = input % 10;
		if(rest > 1 || rest < 0) {
			puts("Keine Binaerzahl eingegeben!"); return -1;
		}
		dec = dec + rest * pot;
		pot = pot * 2;
		input = input / 10;
		stelle++;
	}
	printf("%d (Binaer) entspricht %d (Dezimal)\n", save, dec);
	
	return 0;
}