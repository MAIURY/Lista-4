#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa (float a, float b) {
    
    float hipotenusa;

    a = a*a;
    b = b*a;
    hipotenusa= a + b;

     return sqrt(hipotenusa);

}


int main () 
{
  float a, b, resultado;

    printf(" Entre com valor do cateto1: ");
    scanf("%f", &a);
    printf("Entre com valor de cateto2:  ");
    scanf("%f", &b);

   resultado = hipotenusa (a,b);

    printf("A hipotenusa é: %f\n", resultado);

return 0;
}