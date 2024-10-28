#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int moeda (int num, int num1) {
    int loop;
    loop = num + (rand() % (num1 - num + 1)); 
    return loop;

}

int main (){
    int vezes, resultado;
    srand (time(NULL));
    printf("Entre com a quantidade de vezes que moeda será lançada: ");
    scanf("%d", &vezes);
    for (int i=0; i<vezes; i++){
        resultado = moeda (0, 1);

        if (resultado == 0){
            printf("coroa");
        } else if (resultado == 1){
            printf("cara");
        }
    printf("\n");
    }



return 0;
}