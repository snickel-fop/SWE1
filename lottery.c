#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int win = rand()%5001, input = 0;
	printf("Geben sie ihre Glueckszahl ein (Tipp: Irgendwas zwischen 0 und 5000): ");
	scanf("%d", &input);
	if(input == win) {
		printf("Herzlichen Glueckwunsch, sie haben gewonnen!\n");
	}
	else {
		printf("Herzlichen Glueckwunsch, sie haben verloren! Die Zahl waere %d gewesen.\n", win);
	}
}