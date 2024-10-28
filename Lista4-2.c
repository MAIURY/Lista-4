#include <stdio.h>
#include <stdlib.h>


float result (float base, int expoente) {
    
    float ada=1;
    
    for(int i=1; i <= expoente; i++) {
        ada = ada * base;


    }
    printf("O resultado é: %f ", ada);


}


int main () {

    float base;
    int expoente;
    
    printf("Entre com valor da base: ");
    scanf("%f", &base);

    printf("Entre com o valor do expoente: ");
    scanf("%d", &expoente);

    result (base, expoente);

return 0;
}