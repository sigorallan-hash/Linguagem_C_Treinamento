#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
     vamos criar uma estrutura de coleção de dados
     chamada de array(arranjo)
     1_1_1_1_1_1
    */

    int 
    idade[6] = {18,25,17,16,10,21};
    int
    *pidade = idade;

    /*
    printf
    ("Idade na posição 0\n");
    */

    printf
    ("primeiro elemento elemento é %d\n", idade[0]);
    
    printf
    ("primeiro elemento elemento é %d\n", *pidade);

    printf
    ("o valor do endereço do primeiro elemento é %p\n",pidade);
    
    pidade++;
    
    printf
    ("segundo elemento elemento é %d\n", idade[1]);
    printf
    ("segundo elemento elemento é %d\n", *pidade);
    printf
    ("o endereço do segundo elemento é %p\n",pidade);

    pidade++;
    
    printf
    ("o terceiro elemento elemento é %d\n", idade[2]);
    printf
    ("o terceiro elemento elemento é %d\n", *pidade);
    printf
    ("o endereço do terceiro elemento é %p\n",pidade);

    return 0;
}