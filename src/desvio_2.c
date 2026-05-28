#include<stdio.h>
int main(){

    int ano;
    printf("digite um ano e tecle enter\n");
    scanf("%d",&ano);

    if(ano % 4 == 0){
        printf("O ano é bissexto\n"),ano;
    }
    else{
        printf("O ano %d não é bissexto\n"),ano;
    }
    return 0;
}