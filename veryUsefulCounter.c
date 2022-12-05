#include <stdio.h>

int main() {
	int input = 0;
	printf("Geben Sie die Zahl ein, bis zu der Sie die geraden Zahlen wissen wollen: ");
	scanf("%d", &input);
	if(input < 0) {
		for(int i = 0; i > input; i = i - 2) {
			printf("%d\t%d\t%d\t%d\t%d", i, i, i, i, i*i);
		}
		printf("%d\t%d\t%d\t%d\t%d", input, input, input, input, input*input);
	}
	else if(input > 0) {
		for(int i = 0; i < input; i = i + 2) {
			printf("%d\t%d\t%d\t%d\t%d", i, i, i, i, i*i);
		}
		printf("%d\t%d\t%d\t%d\t%d", input, input, input, input, input*input);
	}
	else {
		printf("Haha, sehr witzig...\n");
	}
}