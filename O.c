#include <stdio.h>



int main(){

int i, n;
int fat;

for ( i = 1; i <=10; i+=2){

   fat=1;
    for ( n = i; n >= 1; n--)
    {
        fat*=n;

    
   }
   
   printf("O fatorial de %d é: %d\n", i, fat);

  
}
return 0;
}


