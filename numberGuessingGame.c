// numberGuessingGame von Benjamin Zastrow, WIN-B2020

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int num = rand()%21, input = 0;
	printf("--- Zahlenratespiel ---\n");
	for(int i = 0; i < 5; ++i) {
		printf("Bitte Zahl raten: ");
		scanf("%d", &input);
		if(input == num) {
			printf("Richtig geraten!\n");
			break;
		}
		else if(input > num) {
			printf("Die gesuchte Zahl ist kleiner!\n");
		}
		else if(input < num) {
			printf("Die gesuchte Zahl ist groesser!\n");
		}
	}
	
	return 0;
}