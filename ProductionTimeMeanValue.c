// ProductionTimeMeanValue von Benjamin Zastrow, WIN-B2020

#include <stdio.h>

int main() {
	int data[10];
	double avg = 0;
	int count;
	for(count = 0; count < 10; ++count) {
		printf("Bitte Produktionszeit eingeben: ");
		scanf("%d", &data[count]);
		if(data[count] == 0) {break;}
	}
	for(int i = 0; i < count; ++i) {
		if(data[i] == 0) {break;}
		avg = avg + data[i];
	}
	printf("Die mittlere Produktionszeit ist %.2lf\n", avg / count);
}