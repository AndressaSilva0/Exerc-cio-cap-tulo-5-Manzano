#include <stdio.h>


int main(){

char nome[100];
int area, largura, comprimento, soma;
int decisao;

do
{
printf("Digite o comodo desejado para o calculo da área: \n");
scanf("%s", nome);
printf("Digite o valor da largura: \n");
scanf("%d", &largura);
printf("Digite o valor do comprimento: \n");
scanf("%d", &comprimento);

area = largura * comprimento;
soma+=area;

printf("Você quer continuar? 0 para continuar e 1 para encerrar \n");
scanf("%d", &decisao);


}while(decisao !=1);

printf("A soma das areas é de %d: ", soma);

return 0;

}
