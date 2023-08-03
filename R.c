#include <stdio.h>



int main(){

int num, ma, me;

printf("Digite um número inteiro positivo ou negativo: \n");
scanf("%d", &num);

ma = num;
me = num;

while(num>=0){

if (num > ma) {

            ma = num;
        }

         if (num < me) {
            me = num;
        }

        printf("O digitado valor é um inteiro positivo:\n ");
        scanf("%d", &num);

      
    }

    printf("O maior valor informado foi: %d\n", ma);
    printf("O menor valor informado foi: %d\n", me);

  

return 0;
    
}


