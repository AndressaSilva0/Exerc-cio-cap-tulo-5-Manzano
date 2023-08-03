#include <stdio.h>
#include <math.h>


int main(){

float  graos=1;
float somatorio=0;
int quadrados;

for (quadrados = 1; quadrados <= 64; quadrados++)
{
    somatorio += graos;
    graos *= 2;
}

printf("a quatidade de grãos no tabuleiro de xadrez é %.1f\n", somatorio);


return 0;
}
