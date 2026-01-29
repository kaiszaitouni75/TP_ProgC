#include <stdio.h>

int main() {

    int compteur = 5;   // valeur < 10
    int ligne, colonne;

    for (ligne = 1; ligne <= compteur; ligne++) {
        for (colonne = 1; colonne <= ligne; colonne++) {

            if (colonne == 1 || colonne == ligne || ligne == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }

        }
        printf("\n");
    }

    return 0;
}
