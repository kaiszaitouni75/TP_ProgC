#include <stdio.h>

// Définition de la structure RGBA
struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {
    struct Couleur couleurs[10];

    // Initialisation des couleurs
    couleurs[0].r = 0xef; couleurs[0].g = 0x78; couleurs[0].b = 0x12; couleurs[0].a = 0xff;
    couleurs[1].r = 0x2c; couleurs[1].g = 0xc8; couleurs[1].b = 0x64; couleurs[1].a = 0xff;
    couleurs[2].r = 0x00; couleurs[2].g = 0x80; couleurs[2].b = 0xff; couleurs[2].a = 0xff;
    couleurs[3].r = 0xff; couleurs[3].g = 0x00; couleurs[3].b = 0x00; couleurs[3].a = 0xff;
    couleurs[4].r = 0x00; couleurs[4].g = 0xff; couleurs[4].b = 0x00; couleurs[4].a = 0xff;
    couleurs[5].r = 0x00; couleurs[5].g = 0x00; couleurs[5].b = 0xff; couleurs[5].a = 0xff;
    couleurs[6].r = 0xff; couleurs[6].g = 0xff; couleurs[6].b = 0x00; couleurs[6].a = 0xff;
    couleurs[7].r = 0xff; couleurs[7].g = 0x00; couleurs[7].b = 0xff; couleurs[7].a = 0xff;
    couleurs[8].r = 0x00; couleurs[8].g = 0xff; couleurs[8].b = 0xff; couleurs[8].a = 0xff;
    couleurs[9].r = 0x80; couleurs[9].g = 0x80; couleurs[9].b = 0x80; couleurs[9].a = 0xff;

    // Affichage des couleurs
    for(int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i+1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert : %d\n", couleurs[i].g);
        printf("Bleu : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
        printf("----------------------\n");
    }

    return 0;
}
