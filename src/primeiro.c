//primeiro da biblioteca padrão de entrada e saida
#include <stdio.h>
// o programa iniciar e executar a partir da função main
int main(){
    //declaração da variavel ] com o tipo int (inteiro)
  int j;

 //vamos pedir ao usuario digitar um valor
 //inteiro para ser guardado na variavel
 printf("digite um valor inteiro e tecle enter:\n");


 // o comando scanf sera utilizado para capturar o
 //numero inteiro que o usuario ira digitar o caracter
 //f do scan é usado para indicar qual sera o formato
 // de dados digitados pelos usuario. neste caso, usaremos
 // %d, que indicar que o usuário digitou é um número
 // decimal, neste número será alocado no endereço de
 // memória da variavel j, portanto usaremos &j, para
 //indicar o endereço da variavel

 scanf("%d" ,&j);
 printf("o valor digitado pelo usuario é %d\n\n.j");
 return 0; //retorna ao computador que o programa acabou.
}