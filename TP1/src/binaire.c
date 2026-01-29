#include <stdio.h>

int main() {

    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nb_tests = 5;

    for (int n = 0; n < nb_tests; n++) {

        int nombre = nombres[n];
        int bits[32];
        int i = 0;

        printf("Decimal : %d -> Binaire : ", nombre);

        /* Cas particulier */
        if (nombre == 0) {
            printf("0");
        } else {

            /* Conversion en binaire */
            while (nombre > 0) {
                bits[i] = nombre % 2;
                nombre = nombre / 2;
                i++;
            }

            /* Affichage à l'envers */
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", bits[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
