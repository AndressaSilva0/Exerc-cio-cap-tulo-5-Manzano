#include <stdio.h>

int main(){


int soma=0, media, i, valor;

printf("Digite os valores dos inteiros positivos\n");

for ( i = 0; i >=0; i++)
{

printf("O Valor %d: ", i+1);
scanf("%d", &valor);

        if (valor < 0) {
            break;

        }
   
   soma += valor;

} 
media = soma/(i+1);

printf("\nSomatório: %d\n", soma);
printf("Média: %d\n", media);
printf("Total de valores lidos: %d\n", i);


return 0;
}
