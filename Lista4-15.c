#include <stdio.h>
#include <stdlib.h>

void quad(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void quad_vazado(int lado) {
    
    for (int i = 0; i < lado; i++) {
        printf("* ");
    }
    printf("\n");

    
    for (int i = 0; i < lado - 2; i++) {
        printf("* ");
        for (int j = 0; j < lado - 2; j++) {
            printf("  ");
        }
        printf("*\n");
    }

    if (lado > 1) { 
        for (int i = 0; i < lado; i++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n, lado;

    printf("Digite 0 para quadrado vazado e 1 para quadrado cheio: ");
    scanf("%d", &n);

    printf("Qual o valor dos lados: ");
    scanf("%d", &lado);

    if (n == 0) {
        quad_vazado(lado);
        printf("\n");
    } else {
        quad(lado);
        printf("\n");
    }

    return 0;
}
