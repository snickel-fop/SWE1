#include <stdio.h>

int main() {
	int choice = 0;
	double exchangeRate = 0, eur = 0, usd = 0;
	printf("Bitte geben Sie den Wechselkurs ein: Ein EUR in USD: ");
	scanf("%lf", &exchangeRate);
	printf("Menue: Welche Umwandlung wollen Sie durchfuehren?\n-1- EUR nach USD\n-2- USD nach EUR\nAuswahl: ");
	scanf("%d", &choice);
	if(choice == 1) {
		printf("Bitte geben Sie einen EUR-Betrag ein: ");
		scanf("%lf", &eur);
		usd = eur * exchangeRate;
		printf("Der Betrag %.2lfEUR entspricht %.2lfUSD bei einem Wechselkurs von %.2lf.\n", eur, usd, exchangeRate);
	}
	else if(choice == 2) {
		printf("Bitte geben Sie einen USD-Betrag ein: ");
		scanf("%lf", &usd);
		eur = usd / exchangeRate;
		printf("Der Betrag %.2lfUSD entspricht %.2lfEUR bei einem Wechselkurs von %.2lf.\n", usd, eur, exchangeRate);
	}
	else {
		printf("Fehler bei der Eingabe! Programmende...\n");
	}
	
	return 0;
}