#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int aleatorio (int num, int num1) {
    int bet;
    bet = num + (rand() % (num -num1 +1));
    return bet;

}

int main () {
    int secret=0, palpite=0;
srand(time (NULL));
secret = aleatorio (1, 100);

printf ("Qual é o numero?  ");
scanf("%d",&palpite);

while(secret!= palpite){
    if (secret< palpite ){
        printf("Muito alto tente novamente: ");
            printf("\n");
    } else if (secret >palpite ){
        printf("Muito baixo");
        printf("\n");
    } 


    printf ("Qual é o numero?  ");
    scanf("%d",&palpite);
    printf("\n");

}

printf("Excelente! você adivinhou o numero!");
printf("\n");

return 0;
}