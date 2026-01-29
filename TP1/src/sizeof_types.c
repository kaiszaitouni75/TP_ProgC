#include <stdio.h>

int main() {

    /* Types char */
    printf("char : %zu octets\n", sizeof(char));
    printf("signed char : %zu octets\n", sizeof(signed char));
    printf("unsigned char : %zu octets\n\n", sizeof(unsigned char));

    /* Types short */
    printf("short int : %zu octets\n", sizeof(short int));
    printf("signed short int : %zu octets\n", sizeof(signed short int));
    printf("unsigned short int : %zu octets\n\n", sizeof(unsigned short int));

    /* Types int */
    printf("int : %zu octets\n", sizeof(int));
    printf("signed int : %zu octets\n", sizeof(signed int));
    printf("unsigned int : %zu octets\n\n", sizeof(unsigned int));

    /* Types long */
    printf("long int : %zu octets\n", sizeof(long int));
    printf("signed long int : %zu octets\n", sizeof(signed long int));
    printf("unsigned long int : %zu octets\n\n", sizeof(unsigned long int));

    /* Types long long */
    printf("long long int : %zu octets\n", sizeof(long long int));
    printf("signed long long int : %zu octets\n", sizeof(signed long long int));
    printf("unsigned long long int : %zu octets\n\n", sizeof(unsigned long long int));

    /* Types flottants (pas de signed/unsigned) */
    printf("float : %zu octets\n", sizeof(float));
    printf("double : %zu octets\n", sizeof(double));
    printf("long double : %zu octets\n", sizeof(long double));

    return 0;
}
