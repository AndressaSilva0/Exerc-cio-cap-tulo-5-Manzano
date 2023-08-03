#include <stdio.h>

int main(){


int i, n;
int somatorio=0, fat_valor;
int valores;


for ( i = 0; i < 15; i++)
{
   printf("\nDigite um número inteiro\n");
   
   scanf("%d", &valores);
    fat_valor=1;

for (n = valores; n >= 1; n--)
{

fat_valor*=n;

}

somatorio+=fat_valor;

}


printf("O resultado da soma desse fatorial é %d", somatorio);

return 0;

}