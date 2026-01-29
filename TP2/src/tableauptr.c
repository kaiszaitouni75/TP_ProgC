#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11

int main() {
    int tabInt[N];
    float tabFloat[N];

    srand(time(NULL));

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    // Remplissage aléatoire
    for(int i = 0; i < N; i++) {
        *(pInt + i) = rand() % 150;
        *(pFloat + i) = (rand() % 1000) / 100.0f;
    }

    // Affichage avant multiplication
    printf("Tableau d'entiers (avant multiplication) :\n");
    for(int i = 0; i < N; i++)
        printf("%d ", *(pInt + i));
    printf("\n");

    printf("Tableau de floats (avant multiplication) :\n");
    for(int i = 0; i < N; i++)
        printf("%.2f ", *(pFloat + i));
    printf("\n");

    // Multiplication par 3 pour les indices divisibles par 2
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3.0f;
        }
    }

    // Affichage après multiplication
    printf("Tableau d'entiers (après multiplication) :\n");
    for(int i = 0; i < N; i++)
        printf("%d ", *(pInt + i));
    printf("\n");

    printf("Tableau de floats (après multiplication) :\n");
    for(int i = 0; i < N; i++)
        printf("%.2f ", *(pFloat + i));
    printf("\n");

    return 0;
}
