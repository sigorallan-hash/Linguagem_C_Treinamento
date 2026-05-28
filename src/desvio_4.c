#include<stdio.h>
int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    //
    //
    printf("digite a nota do primeiro ano.\n");
    scanf("%f",&nota1);
    //
    printf("digite o segundo ano.\n");
    scanf("%f",&nota2);
    //
    printf("digite o terceiro ano\n");
    scanf("%f",&nota3);
    //
    printf("coloque o comportamento do aluno.\n");
    scanf("%f",&nota4);
    //
    //
    media = (nota1 + nota1 + nota3 + nota4) /4;
    //
    if(media >= 7){
        printf("aprovado.\n"),media;
    }
    else{
printf("reprovado.\n"),media;
    }
    return 0;
}