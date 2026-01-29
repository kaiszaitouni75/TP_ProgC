#include <stdio.h>
#include <string.h>  // Pour strcpy

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float noteProg;
    float noteSys;
};

int main() {
    struct Etudiant etudiants[5];

    // Saisie des informations
    for(int i = 0; i < 5; i++) {
        printf("Saisie des informations de l'étudiant.e %d :\n", i+1);

        printf("Nom : ");
        scanf(" %[^\n]", etudiants[i].nom);

        printf("Prénom : ");
        scanf(" %[^\n]", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);

        printf("Note Programmation C : ");
        scanf("%f", &etudiants[i].noteProg);

        printf("Note Système d'exploitation : ");
        scanf("%f", &etudiants[i].noteSys);

        printf("-------------------------------\n");
    }

    // Affichage des données
    printf("\n--- Liste des étudiants ---\n");
    for(int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.2f\n", etudiants[i].noteProg);
        printf("Note Système d'exploitation : %.2f\n", etudiants[i].noteSys);
        printf("-------------------------------\n");
    }

    return 0;
}
