#include <stdio.h>

int main(){


   int soma = 0;
    int num;

    for(num = 1; num <= 100; num++) {
        soma += num;
    }

    printf("A soma dos cem primeiros números naturais é: %d\n", soma);

    return 0;
}





