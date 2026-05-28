/*
Fazer uma contagem de 1 a 50 e exibir somente os númerosmultiplos de 3
*/

#include<stdio.h>

int main(){
    
    int i;


    printf("digite um número e tecle enter. \n");
    // scanf("%d",&num1);
    i = 0;
    while (i <= 50)
    {
        if( i%3 == 0){
            printf("este número %d é multiplo de 3\n",i);
        }
        i++;
    }
    return 0;
}