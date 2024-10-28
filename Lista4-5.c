#include <stdio.h>
#include <stdlib.h>

    int invertido (int num){
        int resto, loop=0;
        while (num != 0) {
            resto = num % 10;
            loop = loop * 10 + resto;
            num /= 10;
        }
        return loop;
    }
 
 int main () {
    int num, resultado;
    printf("Entre com um numero:  ");
    scanf("%d", &num);

    resultado = invertido (num);

    printf("O numero invertido: %d\n", resultado);

return 0;
}