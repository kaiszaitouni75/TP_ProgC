#include <stdio.h>

int main() {

    /* char */
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    /* short */
    short s = -32000;
    unsigned short us = 65000;

    /* int */
    int i = -1000;
    unsigned int ui = 1000;

    /* long int */
    long int li = -100000L;
    unsigned long int uli = 100000UL;

    /* long long int */
    long long int lli = -1000000000LL;
    unsigned long long int ulli = 1000000000ULL;

    /* float */
    float f = 3.14f;

    /* double */
    double d = 3.1415926535;

    /* long double */
    long double ld = 3.141592653589793L;

    /* Affichage */
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %hd\n", s);
    printf("unsigned short : %hu\n\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %f\n", f);
    printf("double : %f\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
