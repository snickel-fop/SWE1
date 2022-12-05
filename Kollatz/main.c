#include <stdio.h>

void kollatz(int num) {
    printf("Folge: %d ", num);
    while(1) {
        if(num % 2 == 0) { //gerade
            num = num / 2;
        }
        else { //ungerade
            num = (num*3) + 1;
        }
        printf("%d ", num);
        if(num == 1) {
            printf("--- Kollatz fuer diese Zahl bewiesen!\n");
            break;
        }
    }
}

int main()
{
    int input = 0, end = 0;
    printf("--- Kollatzfolgenrechner von Benjamin Zastrow, WIN-B! ---\n");
    while(1) {
        if(input == 0) {
            printf("-1- Kollatzfolge einer Zahl berechnen\n-2- Kollatzfolgen eines Zahlenbereichs berechnen\n-3- Programm beenden\nAUSWAHL: ");
            scanf("%d", &input);
        }
        if(input == 1) {
            printf("Bitte eine positive Ganzzahl eingeben: ");
            scanf("%d", &input);
            if(input <= 1) {
                printf("Fehler: Die eingegebene Zahl ist zu klein!\n\n");
                input = 1;
            }
            else {
                kollatz(input);
                printf("\n");
                input = 0;
            }
        }
        else if(input == 2) {
            printf("Bitte einen positiven Startwert eingeben: ");
            scanf("%d", &input);
            if(input <= 1) {
                printf("Fehler: Die eingegebene Zahl ist zu klein!\n\n");
                input = 2;
            }
            else {
                printf("Bitte einen positiven Endwert > Startwert eingeben: ");
                scanf("%d", &end);
                if(end <= input) {
                    printf("Fehler: Die eingegebene Zahl ist zu klein!\n\n");
                    input = 2;
                }
                else {
                    for(int i = input; i <= end; ++i) {
                        kollatz(i);
                    }
                    printf("\n");
                    input = 0; end = 0;
                }
            }
        }
        else if(input == 3) {
            break;
        }
        else {
            puts("Fehler: Menueeintrag existiert nicht!\n");
            input = 0;
        }
    }
    return 0;
}
