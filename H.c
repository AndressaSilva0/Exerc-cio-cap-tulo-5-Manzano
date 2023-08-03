#include <stdio.h>

int main() {

    int base, exp;
    long long res = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &exp);



 for (int i = 0; i < exp; i++) {
        res *= base;
     if (exp < 0) {
        printf("O expoente deve ser negativo.\n");
        
    }

 }

    printf("O resultado de %d elevado a %d é: %lld\n", base, exp, res);

    return 0;
}