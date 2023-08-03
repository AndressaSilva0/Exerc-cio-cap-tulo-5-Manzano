#include <stdio.h>


int main(){

int atual = 0, anterior = 0 , proximo = 1;



for (int i = 1; i < 15; i++)
{
   printf("%d\n", proximo);

   anterior = atual;
   atual = proximo;
   proximo = anterior + atual;
}



}