#include <stdio.h>

int longueur(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

void copier(char source[], char destination[]) {
    int i = 0;
    while(source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void concatener(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Trouver la fin de str1
    while(str1[i] != '\0') {
        i++;
    }

    // Ajouter str2 à la fin de str1
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100], copie[100];

    // Lire les chaînes
    printf("Entrez la première chaîne : ");
    scanf("%[^\n]%*c", str1);  // Lire avec espaces
    printf("Entrez la deuxième chaîne : ");
    scanf("%[^\n]%*c", str2);

    // Calcul de la longueur
    printf("Longueur de la première chaîne : %d\n", longueur(str1));
    printf("Longueur de la deuxième chaîne : %d\n", longueur(str2));

    // Copier str1 dans copie
    copier(str1, copie);
    printf("Copie de la première chaîne : %s\n", copie);

    // Concaténer str1 et str2
    concatener(str1, str2);
    printf("Concaténation des deux chaînes : %s\n", str1);

    return 0;
}
