

#include <stdio.h>

int main() {

    int num1 = 10;
    int num2 = 3;
    char op = '+';

    switch (op) {

        case '+':
            printf("Addition : %d\n", num1 + num2);
            break;

        case '-':
            printf("Soustraction : %d\n", num1 - num2);
            break;

        case '*':
            printf("Multiplication : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Division : %d\n", num1 / num2);
            else
                printf("Erreur : division par zero\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Modulo : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zero\n");
            break;

        case '&':
            printf("ET binaire : %d\n", num1 & num2);
            break;

        case '|':
            printf("OU binaire : %d\n", num1 | num2);
            break;

        case '~':
            printf("NON binaire sur num1 : %d\n", ~num1);
            break;

        default:
            printf("Operateur non reconnu\n");
    }

    return 0;
}
