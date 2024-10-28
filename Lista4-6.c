#include <stdio.h>
#include <stdlib.h>

int primo (int num){

    for(int i=1; i<=num; i += 2){
        printf("%d", i);
        printf("\n");
    }

}


int main () {
     int num;
    printf("Você quer os numeros 1 até quanto: ");
    scanf("%d", &num);

    primo(num);

return 0;
}