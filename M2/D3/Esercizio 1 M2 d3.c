#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20];
    int choice;
    int score = 0;
    int play_again = 1;

    printf("Benvenuto nel gioco: Indovina i protagonisti dei libri!\n");
    
    printf("Inserisci il tuo nome: ");
        scanf("%s", name);
    

    while (play_again) {
		
		printf("\nCiao %s, sei pronto/a per iniziare?\n", name);
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 2) {
            printf("A presto %s!\n", name);
            return 0;
        }

        score = 0;

        // Prima domanda
        printf("Domanda 1: Chi e' il protagonista del libro \"Il signore degli anelli\"?\n");
        printf("1. Gandalf\n");
        printf("2. Frodo Baggins\n");
        printf("3. Sauron\n");
        scanf("%d", &choice);
        if (choice == 2) {
            printf("Esatto!\n");
            score++;
        } else {
            printf("Ops, la risposta corretta era Frodo Baggins\n");
        }
        printf("\n");

        // Seconda domanda
        printf("Domanda 2: Chi e' il protagonista del libro \"Il giovane Holden\"?\n");
        printf("1. Phoebe Caulfield\n");
        printf("2. Mr. Antolini\n");
        printf("3. Holden Caulfield\n");
        scanf("%d", &choice);
        if (choice == 3) {
            printf("Esatto!\n");
            score++;
        } else {
            printf("Ops, la risposta corretta era Holden Caulfield\n");
        }
        printf("\n");

        // Terza domanda
        printf("Domanda 3: Chi e' il protagonista del libro \"1984\"?\n");
        printf("1. Winston Smith\n");
        printf("2. Big Brother\n");
        printf("3. Emmanuel Goldstein\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Esatto!\n");
            score++;
        } else {
            printf("Ops, la risposta corretta era Winston Smith\n");
        }
        printf("\n");
        
        
        // Quarta domanda
        printf("Domanda 4: Chi e' il protagonista del libro \"Chiedi alla polvere\"?\n");
        printf("1. John Fante\n");
        printf("2. Arturo Bandini\n");
        printf("3. Jack Kerouac\n");
        scanf("%d", &choice);
        if (choice == 2) {
            printf("Esatto!\n");
            score++;
        } else {
            printf("Ops, la risposta corretta era Arturo Bandini\n");
        }
        printf("\n");
        
        
        // Quinta domanda
        printf("Domanda 5: Chi e' il protagonista del libro \"Guida galattica per gli autostoppisti\"?\n");
        printf("1. Arthur Dent\n");
        printf("2. Marvin\n");
        printf("3. Omero Celd\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Esatto!\n");
            score++;
        } else {
            printf("Ops, la risposta corretta era Holden Caulfield\n");
        }
        printf("\n");
        

        printf("Il tuo punteggio finale e': %d\n", score);

        printf("Vuoi giocare ancora?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &choice);
        play_again = (choice == 1);
        printf("\n");
    }

    printf("A presto %s!\n", name);
    return 0;
}

