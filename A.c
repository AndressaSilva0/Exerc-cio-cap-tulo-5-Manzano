#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int in = 15;
    int f = 200;

    for (int i = in; i <= f; i++) {
        int quadrado = pow(i, 2);
        printf("O quadrado de %d é %d\n", i, quadrado);
    }

    return 0;
}


