#include <stdio.h>
int main(){


int celsius;
float fahrenheit;

for ( celsius = 10; celsius <= 100; celsius+=10)
{
    printf("A temperatura de Celsius %d para Fahrenheit é %.1f", celsius, fahrenheit);
     
      fahrenheit = (celsius * 9 / 5.0) + 32;


}




}



