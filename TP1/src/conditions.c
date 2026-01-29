#include <stdio.h>

int main() {

    int i;
    int somme = 0;

    for (i = 1; i <= 1000; i++) {

        /* Si divisible par 11, on passe au suivant */
        if (i % 11 == 0) {
            continue;
        }

        /* Si divisible par 5 ou par 7, on ajoute à la somme */
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }
