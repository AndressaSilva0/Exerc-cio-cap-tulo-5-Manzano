#include <stdio.h>


int main() {
    int dividendo, div;
    int i = 0;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &div);

    if (div == 0) {
        printf("Erro! O divisor não pode ser zero.\n");
        
    }

    while (dividendo >= div) {
        dividendo -= div;
        i++;
    }

    printf("O quociente é: %d\n", i);

    return 0;
}

