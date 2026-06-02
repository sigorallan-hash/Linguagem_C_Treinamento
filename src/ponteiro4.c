#include<stdio.h>
#include<stdlib.h>
int main()
{
    system
    ("clear");
/*
 declaração de variavel cahr(character) letra, simbolo, número.
*/
    char letra = 'T';
    /*
    declaração de variavel char para guardar uma palavra, ou seja, uma
    string (cadeia de characteres) - uma coleção de caracteres.
    */
   char nome[30] = "Stenio-lhe disse hello world!\n";
   printf
   ("%c\n",letra);
   printf
   ("%s\n",nome);
   printf
   ("%c\n",nome[0]);

   return 0;
}