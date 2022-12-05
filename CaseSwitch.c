/* CaseSwitch, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Switches the case of a given string
 */

#include <stdio.h>
#include <stdlib.h>

void changeCase(char input[]) {
    for(int i = 0; input[i] != '\0'; ++i) {
        if(input[i] > 96 && input[i] < 123) {
            input[i] = input[i] - 32; //Kleinbuchstaben in Großbuchstaben
        }
        else if(input[i] > 64 && input[i] < 91) {
            input[i] = input[i] + 32; //Großbuchstaben in Kleinbuchstaben
        }
    }
}

int main() {
    char input[64];

    printf("Bitte einen String eingeben: ");
    for(int i = 0; i < 64; ++i) {
        input[i] = getchar();
        if(input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }

    changeCase(input);
    printf("Umgewandelter String: %s\n", input);
}
