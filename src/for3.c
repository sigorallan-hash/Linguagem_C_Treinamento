/*
o programa deve caucular a potência de um determinado número(base) de acordo com 
um expoente(potência). usuario deve informar os dois valores.
o programa deve usar a estrutura de repetição for para caucular, ao final deve
exibir o resultado.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
  
    int b,e,t,i;

    printf
    ("Digite um número para a base e tecle enter. \n");
    scanf("%d",&b);

    printf
    ("Digite um número expoente e tecle enter. \n");
    scanf
    ("%d",&e);

 t = b;

 for(i = 1; i <= e ;i++)
 {
    printf("O resultado é %d\n",t);
 }
 return 0;

}