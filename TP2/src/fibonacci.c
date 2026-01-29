#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    // Demander le nombre de termes
    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci jusqu'à %d termes :\n", n);

    // Afficher les premiers termes
    if(n >= 1)
        printf("%d ", t1);
    if(n >= 2)
        printf("%d ", t2);

    // Calculer et afficher les termes suivants
    for(int i = 2; i < n; i++) {
        nextTerm = t1 + t2;
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");  // Retour à la ligne
    return 0;
}
