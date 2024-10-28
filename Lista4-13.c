#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia(float n, float n1, float n2, float n3) {
    float ponto1, ponto2, soma = 0;
    ponto1 = n - n1;
    ponto1 = ponto1 * ponto1;

    ponto2 = n2 - n3;
    ponto2 = ponto2 * ponto2;
    soma = ponto1 + ponto2;
    return sqrt(soma);
}

int main() {
    float n, n1, n2, n3, media = 0, result;
    int count = 0; 

    while (1) { 
        printf("Entre com par de numeros (digite 0 para sair): ");
        scanf("%f %f", &n, &n1);
        
        if (n == 0) {
            break;  
        }

        printf("Entre com outro par de numeros: ");
        scanf("%f %f", &n2, &n3);

        result = distancia(n, n1, n2, n3);
        media += result;
        count++;  
    }

    if (count > 0) {  
        media /= count;  
    }

    printf("Último resultado: %.2f  Média: %.2f\n", result, media);

    return 0;
}
