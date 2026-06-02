#include<stdio.h>
#include<stdlib.h>

int main()
{
    system
    ("clear");

    char nome_completo[30];
    /*
    vamos usar uma função para obter 
    todos os caracteres digitados pelo
    usuario na tela de termimal
    o nome da função é fgets.
    */
   printf
   ("Digite o seu nome completo e tecle enter \n");
   fgets
   (nome_completo,30,stdin);
   printf
   ("Oĺá Sr(a) %s\n",nome_completo);
   return 0;
}