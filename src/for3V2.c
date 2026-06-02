/*
o programa deve caucular a potência de um determinado número(base) de acordo com 
um expoente(potência). usuario deve informar os dois valores.
o programa deve usar a estrutura de repetição for para caucular, ao final deve
exibir o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

   int main(){
system
("clear");

int 
base, expoente;
int
resultado =1;

printf
(" Digite a base e tecle enter. \n");

scanf
("%d",&base);

printf
("Digite o expoente e tecle enter. \n");

scanf
("%d",&expoente);

for (int i = 0; i < expoente; i++)
{
   resultado *= base;
}

printf
("O resultado é: %d\n", resultado);

return 0;
   }