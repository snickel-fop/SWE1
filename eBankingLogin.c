#include <stdio.h>

int main() {
	int vNummer = 0, pin = 0;
	printf("--- LOGIN ONLINEBANKING ---\n");
	for(int i = 0; i < 3; ++i) {
		printf("Verfuegernummer: ");
		scanf("%d", &vNummer);
		printf("PIN: ");
		scanf("%d", &pin);
		
		if((vNummer == 1234) && (pin == 5562))
		{
			printf("-- LOGIN ERFOLGREICH\n");
			break;
		}
		else if(!(vNummer == 1234) && pin == 5562) {
			printf("-- vNummer FALSCH!\n");
		}
		else if(vNummer == 1234 && !(pin == 5562)) {
			printf("-- PIN FALSCH!\n");
		}
		else {
			printf("-- LOGIN FEHLGESCHLAGEN!\n");
		}
	}
	return 0;
}