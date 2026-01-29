#include <stdio.h>

int main() {

    int d = 0x10010000;   // valeur de test
    int bit4_gauche;
    int bit20_gauche;

    /* 4e bit de gauche -> bit 28 */
    bit4_gauche = (d & (1 << 28)) != 0;

    /* 20e bit de gauche -> bit 12 */
    bit20_gauche = (d & (1 << 12)) != 0;

    /* Vérification finale */
    if (bit4_gauche && bit20_gauche) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
