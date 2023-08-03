#include <stdio.h>

int main(){

int soma=0, media, i, valor;


for ( i = 0; i < 10; i++)
{
     printf("Valor %d: ", i + 1);

        scanf("%d", &valor);

        soma += valor;
}

   media = soma / i;

    printf("\nSomatório dos valores: %d\n", soma);

    printf("Média dos valores: %d\n", media);

}