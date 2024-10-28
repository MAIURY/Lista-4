#include <stdio.h>
#include <stdlib.h>


int multiplo (int p, int q) {
    int m;
    m = q % p;

    if (m == 0) {
        return 1; 
    } else {
        return 0;  
    }
}

int main (){
    int p, q, resultado;

    printf("Entre com o numero1:  ");
    scanf("%d", &p);
    printf("Entre com o numero2:  ");
    scanf("%d", &q);
    
    resultado = multiplo (p,q);

    printf("%d", resultado);


return 0;
}