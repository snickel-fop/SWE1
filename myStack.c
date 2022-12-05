/* myStack, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Implementation of a stack data-structure
 */

#include <stdio.h>

#define STACKSIZE 128

struct Stack {
    int length;
    int data[STACKSIZE];
};

int push(int newInt, struct Stack *stack) { //Fügt ein Element new auf den Stack hinzu. Gibt 0 bei Erfolg zurück, -1 bei Fehler.
    if(stack->length == STACKSIZE) {return -1;}
    stack->data[stack->length] = newInt;
    stack->length++;
    return 0;
}
int pop(struct Stack *stack) {//Gibt das oberste Element zurück und entfernt dieses anschließend aus dem Stack
    if(stack->length == 0) {return -1;}
    int ret = stack->data[stack->length-1];
    stack->data[stack->length-1] = 0;
    stack->length--;
    return ret;
}
int isEmpty(struct Stack *stack) {//Gibt 1 zurück, wenn der Stack leer ist, 0 wenn nicht.
    if(stack->length == 0) {return 1;}
    else {return 0;}
}
int isFull(struct Stack *stack) {//Gibt 1 zurück, wenn der Stack voll ist, 0 wenn nicht.
    if(stack->length == STACKSIZE) {return 1;}
    else {return 0;}
}
int top(struct Stack *stack) {//Gibt das oberste Element zurück
    if(stack->length == 0) {return -1;}
    return stack->data[stack->length-1];
}
int length(struct Stack *stack) {//Gibt die Länge des Stacks (befüllte Elemente) zurück
    return stack->length;
}
int size() { //Gibt die Größe des Stacks (maximale Elementzahl) zurück
    return (int) STACKSIZE;
}
void reset(struct Stack *stack) {//Leert den Stack (oder initialisiert ihn)
    stack->length = 0;
    for(int i = 0; i < STACKSIZE; ++i) { //Setzt jedes Element des Stacks auf 0
        stack->data[i] = 0;
    }
}


int main() {
    int choice = -1, temp = 0, exit = 0;
    printf("--- myStack Implementierung von Benjamin Zastrow ---\n");
    struct Stack stack1;
    reset(&stack1);
    printf("-- Stack wurde initialisiert!\n");
    printf("-- Groesse des Stacks: %d\n", size());
    while(0 == 0) { //Dauerschleife: Menü
        printf("\n-- MENUE\n(1) Element hinzufuegen\n(2) Element entnehmen\n(3) oberstes Element betrachten\n(4) momentane Lanege des Stacks ausgeben\n(5) Abfragen, ob Stack leer ist\n(6) Abfragen, ob Stack voll ist\n(7) Stack leeren\n(0) Programm beenden\n-> Auswahl: ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice) {
            case 0: exit = 1; break;
            case 1: {
                printf("-> Geben sie das neue Element ein: ");
                scanf("%d", &temp);
                if(push(temp, &stack1) == -1) {
                    printf("-- Fehler: Stack ist voll!\n");
                }
                else {
                    printf("-- Element hinzugefuegt!\n");
                }
                break;
            }
            case 2: {
                int tmp = pop(&stack1);
                if(tmp == -1) {
                    printf("-- Fehler: Es kann kein Element entnommen werden, der Stack ist bereits leer!\n");
                }
                else {
                    printf("-- Das entnommene Element: %d\n", tmp);
                }
                break;
            }
            case 3: {
                int tmp = top(&stack1);
                if(tmp == -1) {
                    printf("-- Fehler: Der Stack ist leer!\n");
                }
                else {
                    printf("-- Das oberste Element: %d\n", tmp);
                }
                break;
            }
            case 4: {
                printf("-- Momentane Laenge des Stacks: %d\n", length(&stack1));
                break;
            }
            case 5: {
                if(isEmpty(&stack1) == 1) {
                    printf("-- Der Stack ist leer!\n");
                }
                else {
                    printf("-- Der Stack ist nicht leer!\n");
                }
                break;
            }
            case 6: {
                if(isFull(&stack1) == 1) {
                    printf("-- Der Stack ist voll!\n");
                }
                else {
                    printf("-- Der Stack ist nicht voll!\n");
                }
                break;
            }
            case 7: {
                printf("-- Stack wird geleert... ");
                reset(&stack1);
                printf("Abgeschlossen!\n");
                break;
            }
            default: {
                printf("-- Fehlerhafte Eingabe!\n");
                break;
            }
        }
        if(exit == 1) {break;}
    }
    return 0;
}
