#include <stdio.h>

int main() {

    int a = 2;        // base
    int b = 3;        // exposant
    int resultat = 1;
    int i;

    for (i = 1; i <= b; i++) {
        resultat = resultat * a;
    }

    printf("%d a la puissance %d = %d\n", a, b, resultat);

    return 0;
}
