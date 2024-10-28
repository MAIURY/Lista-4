#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancamento(int num, int num1) {
    return num + (rand() % (num1 - num + 1)); 
}

int main() {
    srand(time(NULL));

    int dado1, dado2, result = 0, ponto = 0;

    dado1 = lancamento(1, 6);
    dado2 = lancamento(1, 6);
    result = dado1 + dado2;

    printf("Dado1: %d X Dado2: %d = %d\n", dado1, dado2, result);
    

    if (result == 7 || result == 11) {
        printf("Parabéns, você ganhou: %d\n", result);
    } else if (result == 2 || result == 3 || result == 12) { 
        printf("A casa venceu: %d\n", result);
    } else {
        ponto = result;
        printf("Ponto estabelecido: %d\n", ponto);
    }
    
    while (result != 7 && result != ponto) {
        dado1 = lancamento(1, 6);
        dado2 = lancamento(1, 6);

        printf("Dado1: %d X Dado2: %d\n", dado1, dado2);
        result = dado1 + dado2;

        if (result == 7) {
            printf("Você perdeu.\n");
        } else if (result == ponto) {
            printf("Você ganhou.\n");
        }
    }

    return 0;
}
