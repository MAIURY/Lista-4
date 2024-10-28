#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inteiro() {
    return rand() % 100 + 1; 
}

int main() {
    srand(time(NULL));
    int maior, menor, n, produto=1, soma=0, numero;

    printf("Quantos numeros inteiros você quer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número positivo.\n");
        return 1;
    }

    maior = 0;
    menor = 101; 

    for (int i = 0; i < n; i++) {
         numero = inteiro(); 
        printf("Numero gerado: %d\n", numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
        if (numero%2==0){
            produto *= numero;
        }
        if (numero%2==1){
            soma += numero;
        }
         
    }

    printf("O maior número gerado foi: %d\n", maior);
    printf("O menor número gerado foi: %d\n", menor);
    printf("O produto dos numeros: %d\n", produto);
    printf("A soma dos numeros impares: %d\n", soma);
    


    return 0;
}
