/*
O programa deve receber 4 notas, realizar cáuculo da media a verificar se:
- A nota médiafor maior ou ingual á 7 o aluno é aprovado; caso ao contrário estará
reprovado.
*/
#include<stdio.h>
int main(){
    // variaveis
    int nota;
    int aprovado;
    int reprovado;
    int mal_comportamento;
    // 
   

    printf("nota do aluno. \n");
    scanf("%d",&nota);
    


    printf("de 0 á 10, qual é o comportamento do mesmo.\n");
    scanf("%d",&mal_comportamento);

    if(nota & mal_comportamento == 7){
        printf("aprovado.\n");
    }
    else{
        printf("reprovado.\n");
    }

    return 0;
}