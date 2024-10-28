#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleat (int num,int num1){
    int numaleat;
    numaleat = num +(rand() % (num-num1+1));
    return numaleat;
}


int main (){
    srand(time(NULL));

    int num1, num2, result, resposta;

    num1 = aleat(1,9);
    num2 = aleat(1,9);

    printf("%d x %d: ", num1, num2);
    printf("Qual resultado da multiplicação? ");
    scanf("%d", &resposta);
    result= num1*num2;

    while (resposta != result) {
        printf("Qual o resultado da multiplicação: ");
        scanf("%d", &resposta);
    }

    if (result==resposta){
        printf("Parabéns, você acertou\n");
    }
    return 0;
}
