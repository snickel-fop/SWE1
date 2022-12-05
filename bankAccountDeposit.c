#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	char name[20];
	float betrag = 0, account = rand()%5000, new = 0;
	printf("Bitte Nachnamen eingeben: "); scanf("%s", &name);
	printf("Bite Zahlungsbetrag eingeben: "); scanf("%f", &betrag);
	new = account + betrag;
	printf("Guten Tag %s\nBisheriger Kontostand:\t%.2f\nNeuer Kontostand:\t%.2f\n", name, account, new);
	
	return 0;
}