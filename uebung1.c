/*
* Lösung der Aufgabe: Summe aller Zahlen von 1 bis 99 ausgeben und die Zahlen einzeln ausgeben!
*/

#include <stdio.h>

void sum_and_print(const int begin, const int end) {
	int sum = 0;
	for(int i = begin; i <= end; ++i) {
		printf("%d ", i);
		if(i != end) {printf("+ ");}
		sum = sum + i;
	}
	printf("\nSumme der Zahlen: %d\n", sum);
}

int main() {
	int begin = 1, end = 99;
	printf("--- FH Summerschool Uebung1 ---\nAnfang: "); 
	scanf("%d", &begin);
	printf("Ende: ");
	scanf("%d", &end);
	
	sum_and_print(begin, end);
	
	return 0;
}