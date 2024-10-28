#include <stdio.h>
#include <stdlib.h>

void fatorial(int n) {
    for (int i = 1; i <= n; i++) {
        int fat = 1; 
        for (int j = 1; j <= i; j++) {
            fat *= j; 
        }
        printf("O fatorial de %d é: %d\n", i, fat); 
    }
}


int main (){
    int n;

    printf("Você quer o fatorial de 1 até que numero: ");
    scanf("%d",&n);

    fatorial(n);

    return 0;
}