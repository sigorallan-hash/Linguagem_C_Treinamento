# Linguagem_C_Treinamento
## aplicada a lógica de programação e algoritimos em c
<img src=c-programing.jpg width ="360" height="360">
</p>

...

estudo das principais estruturas da linguagem de programação em C.

vamos listar os items trabalhados neste repositório:
  
  * variaveis

  * comandos de entrada e saida de dados(Io input & output):
  - springf
  - scanf

  * desvio de fluxo simples (if ...)
  * desvio de fluxo multiplo (if ... else ...)
  * estrutura de repetição while(enquanto):
  * estrutura de repetição for (para)
  
  * função (modulos):
  - função interna (dentro do arquivo .c)
  - função externa (dentro do arquivo .h)
  
  * importação de módulos
  - Módulos da linguagem (stdio.h)
  - Módulos de usúario (stdlib.h)
  * ponteiro

  * criação de arquivos
  
  #### demonstração de uma estrutura simples de arquivos.c
  
  ``` c
                 //codigo 1
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x = 10;
    
    printf ("O valor de %d\n",x);
    printf ("hello world!");
    
    return 0;
}    
                 //codigo 2
#include<stdio.h>
#include<stdlib.h>

int main(){
int variavel_1, variavel_2;

printf ("digite a variavel 1: ");
scanf ("%d",&variavel_1);

printf ("digite a variavel 2:");
scanf ("%d",&variavel_2);

if(variavel_2 <= variavel_1){
 printf("aprovado!");
} else(){
    printf ("reprovado!");
}

return 0;
}
```