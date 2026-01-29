#include <stdio.h>

int main() {
    // Tableaux de chaînes de caractères
    char noms[5][20] = {"Dupont", "Martin", "Nguyen", "Lopez", "Khan"};
    char prenoms[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Ethan"};
    char adresses[5][50] = {
        "12 Rue A, Paris",
        "34 Rue B, Lyon",
        "56 Rue C, Marseille",
        "78 Rue D, Toulouse",
        "90 Rue E, Lille"
    };

    // Tableaux de notes
    float noteProg[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float noteSys[5] = {14.0, 13.5, 17.0, 15.0, 16.5};

    // Afficher les détails des étudiants
    for(int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", noteProg[i]);
        printf("Note Système d'exploitation : %.2f\n", noteSys[i]);
        printf("-------------------------------\n");
    }

    return 0;
}
