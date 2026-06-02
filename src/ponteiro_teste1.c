#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("clear");

    int i;
    for ( i = 0; i < 100; i++)
    {
        printf ("=");
    }
    // cliente
    char nome[10];
    char sobrenome[10];
    char email[15];
    int idade;
    
    printf("\n\n==CLIENTE==\n\n");
    printf ("\n\ncoloque seu nome:\n");
    fgets (nome,10,stdin);
    printf ("\nAgora coloque seu sobrenome:\n");
    fgets (sobrenome,15,stdin);
    printf ("\nagora coloque se e-mail:\n");
    fgets (email,15,stdin);
    printf ("\nagora qual é a sua idade?:\n");
    scanf ("%d",&idade);

    // vendedor    
    char nome_vendedor[20];
    char sobrenome_vendedor[20];
    int idade_vendedor;
    
    printf("\n\n==VENDEROR==\n\n");
    printf ("\n\ncoloque seu nome:\n");
    fgets (nome_vendedor,20,stdin);
    printf ("\nAgora coloque seu sobrenome:\n");
    fgets (sobrenome_vendedor,20,stdin);
    printf ("\nagora qual é a sua idade?:\n");
    scanf ("%d",&idade_vendedor);
    
    // produto
    char produto[25];
    float preco;
    int parcelas;
    
    printf ("qual é o produto?:\n");
    fgets (produto,25,stdin);
    printf ("qual é preço do mesmo?:");
    scanf("%f",&preco);
    printf ("qual será as parcelas?:");
    scanf ("%d",&parcelas);
    
    // int taxa = preco * parcelas / 100;
    if (taxa <= parcelas)
    {
        printf
    }
    
    printf("O produto %s deu um valor de %f com parcelas de %d ao mês.\n",produto,preco,taxa);

    return 0;
}