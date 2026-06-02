#include <stdio.h>
#include <stdlib.h>

int main()
{
    system
    ("clear");

    int i;
    for ( i = 0; i < 100; i++)
    {
        printf ("=");
        //i++;
    }
    
    printf ("\nPrograma de cadastro\n");

    char primeiro_nome[10];
    
    char
    sobrenome[10];

    char
    email[50];
    
    int idade;

    printf ("Digite seu primeiro nome\n");
    fgets
    (primeiro_nome,10,stdin);
    
    printf ("Digite seu Sobrenome\n");
    fgets
    (sobrenome,10,stdin);
    
    printf ("Digite seu Email\n");
    fgets
    (email,50,stdin);

    printf ("Digite seu Idade\n");
    scanf
    ("%d",&idade);

    //vamos criar um arquivo de texto para guardar os dados dos clientes.

    FILE *arquivo = fopen ("../files/cadastro.txt","a");
    
    fprintf (arquivo,"Nome: %s\n",primeiro_nome);
    fprintf (arquivo,"Sobrenome: %s\n",sobrenome);
    fprintf (arquivo,"Email: %s\n",email);
    fprintf (arquivo,"Idade: %d\n",idade);
    printf ("\n=======================================================================\n");

    // iremos fechar o arquivo.
     fclose (arquivo);

    return 0;
}