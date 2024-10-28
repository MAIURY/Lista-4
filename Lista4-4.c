#include <stdio.h>
#include <stdlib.h>

int fator (int num) {
    int soma= 0;
    for (int i=1; i<num; i++){
        if (num % i == 0) {
            soma += i;
        }
    }
    return (soma==num) ? 1 : 0;

}

int imprimir (int num) {

    printf("O fator de %d: ", num);
    for (int i=1;i<=num; i++) {
        if (num%i ==0){
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

int main (){
    int num;
   
    
    for (int i = 1; i <=100; i++) {

        if (fator(i)){
            imprimir(i);
        }
    }
    
return 0;
}   