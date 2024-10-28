#include <stdio.h>
#include <stdlib.h>


void hora (int n){
    int h, m, s; 
    h = n / 3600;
    m = (n % 3600) / 60;
    s = n % 60;

    printf("%d:%d:%d\n", h, m, s);

}

int main (){
    int segundos;
    printf("Entre com os segundos: ");
    scanf("%d", &segundos);

    hora (segundos);


return 0;
}