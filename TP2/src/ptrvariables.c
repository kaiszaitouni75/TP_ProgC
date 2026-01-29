#include <stdio.h>
#include <stdint.h>

int main() {
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int l = 0x12345678;
    long long int ll = 0x1234567890abcdef;
    float f = 1.0f;
    double d = 2.0;
    long double ld = 3.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Avant manipulation
    printf("=== Avant manipulation ===\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur de l : %08lx\n", (void*)pl, (unsigned long)l);
    printf("Adresse de ll : %p, Valeur de ll : %016llx\n", (void*)pll, (unsigned long long)ll);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);

    unsigned char *pbyte = (unsigned char*)pld;
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    for(int j = 0; j < sizeof(long double); j++)
        printf("%02x", pbyte[j]);
    printf("\n");

    // Manipulation via pointeurs
    *pc += 1;
    *ps += 1;
    *pi += 1;
    *pl += 1;
    *pll += 1;
    *pf = 0.5f;
    *pd = 1.0;
    *pld = 2.0L;

    // Après manipulation
    printf("\n=== Après manipulation ===\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur de l : %08lx\n", (void*)pl, (unsigned long)l);
    printf("Adresse de ll : %p, Valeur de ll : %016llx\n", (void*)pll, (unsigned long long)ll);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);

    pbyte = (unsigned char*)pld;
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    for(int j = 0; j < sizeof(long double); j++)
        printf("%02x", pbyte[j]);
    printf("\n");

    return 0;
}
