#include <stdio.h>

int main() {


    int soma = 0;

    for (int i = 2; i <= 500; i += 2) {
        soma += i;
    }

    printf("O somatório dos valores pares de 1 a 500 é: %d\n", soma);

    return 0;
}






