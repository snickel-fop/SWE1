/* myQueue, V1.0
 * Created by Benjamin Zastrow, WIN-B2020
 * Implementation of a queue data-structure
 */

#include <stdio.h>

#define QUEUESIZE 128

struct Queue {
    int length;
    int data[QUEUESIZE];
};

int enqueue(int newInt, struct Queue *queue) { //Fügt ein Element der Queue hinzu. Gibt 0 bei Erfolg zurück, -1 bei Fehler.
    if(queue->length == QUEUESIZE) {return -1;}
    queue->data[queue->length] = newInt;
    queue->length++;
    return 0;
}
int dequeue(struct Queue *queue) {//Gibt das erste Element zurück und entfernt dieses anschließend aus der Queue (+ nachfolgende Restrukturierung, damit die Queue wieder mit dem ersten Element bei [0] beginnt)
    if(queue->length == 0) {return -1;}
    int ret = queue->data[0];
    queue->length--;
    for(int i = 0; i < queue->length; ++i) {
        queue->data[i] = queue->data[i+1];
    }
    queue->data[queue->length] = 0;
    return ret;
}
int isEmpty(struct Queue *queue) {//Gibt 1 zurück, wenn die Queue leer ist, 0 wenn nicht.
    if(queue->length == 0) {return 1;}
    else {return 0;}
}
int first(struct Queue *queue) {//Gibt das erste Element zurück
    if(queue->length == 0) {return -1;}
    return queue->data[0];
}
int length(struct Queue *queue) {//Gibt die Länge der Queue (befüllte Elemente) zurück
    return queue->length;
}
int size() { //Gibt die Größe der Queue (maximale Elementzahl) zurück
    return (int) QUEUESIZE;
}
void reset(struct Queue *queue) {//Leert die Queue (oder initialisiert sie)
    queue->length = 0;
    for(int i = 0; i < QUEUESIZE; ++i) { //Setzt jedes Element der Queue auf 0
        queue->data[i] = 0;
    }
}

int main() {
    int choice = -1, temp = 0, exit = 0;
    printf("--- myQueue Implementierung von Benjamin Zastrow ---\n");
    struct Queue queue1;
    reset(&queue1);
    printf("-- Queue wurde initialisiert!\n");
    printf("-- Groesse des Queue: %d\n", size());
    while(0 == 0) { //Dauerschleife: Menü
        printf("\n-- MENUE\n(1) Element hinzufuegen\n(2) Element entnehmen\n(3) erstes Element betrachten\n(4) momentane Lanege der Queue ausgeben\n(5) Abfragen, ob Queue leer ist\n(6) Queue leeren\n(0) Programm beenden\n-> Auswahl: ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice) {
            case 0: exit = 1; break;
            case 1: {
                printf("-> Geben sie das neue Element ein: ");
                scanf("%d", &temp);
                if(enqueue(temp, &queue1) == -1) {
                    printf("-- Fehler: Queue ist voll!\n");
                }
                else {
                    printf("-- Element hinzugefuegt!\n");
                }
                break;
            }
            case 2: {
                int tmp = dequeue(&queue1);
                if(tmp == -1) {
                    printf("-- Fehler: Es kann kein Element entnommen werden, die Queue ist bereits leer!\n");
                }
                else {
                    printf("-- Das entnommene Element: %d\n", tmp);
                }
                break;
            }
            case 3: {
                int tmp = first(&queue1);
                if(tmp == -1) {
                    printf("-- Fehler: Die Queue ist leer!\n");
                }
                else {
                    printf("-- Das erste Element: %d\n", tmp);
                }
                break;
            }
            case 4: {
                printf("-- Momentane Laenge der Queue: %d\n", length(&queue1));
                break;
            }
            case 5: {
                if(isEmpty(&queue1) == 1) {
                    printf("-- Die Queue ist leer!\n");
                }
                else {
                    printf("-- Die Queue ist nicht leer!\n");
                }
                break;
            }
            case 6: {
                printf("-- Queue wird geleert... ");
                reset(&queue1);
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
