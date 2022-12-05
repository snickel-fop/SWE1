#include <stdio.h>

int main() {
	double exchangeRate = 0, eur = 0, usd = 0;
	printf("Bitte geben Sie den Wechselkurs ein: ");
	scanf("%lf", &exchangeRate);
	printf("Bitte geben Sie einen EUR-Betrag ein: ");
	scanf("%lf", &eur);
	usd = eur * exchangeRate;
	printf("Der Betrag %.2lfEUR entspricht %.1lfUSD bei einem Wechselkurs von %.2lf.\n", eur, usd, exchangeRate);
	
	return 0;
}