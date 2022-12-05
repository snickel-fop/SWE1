/*
*	Ganzzahl in Binärschreibweise ausdrücken
*/

#include <stdio.h>

int main() {
	int input = 0, n = 0, rest = 0, counter = 0;
	int bin[32]; // Unschön
	
	printf("Bitte Ganzzahl eingeben: "); scanf("%d", &input);
	n = input;
	while (n != 0) {
		rest = n % 2;
		n = n / 2;
		bin[counter] = rest;
		counter++;
	}
	printf("\n%d im Binaersystem: ", input);
	for(int i = counter; i != 0; i--) {
		printf("%d", bin[i-1]);
	}
	printf("\n");
	
	return 0;
}