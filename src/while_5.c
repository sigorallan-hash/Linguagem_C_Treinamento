#include<stdio.h>

int main(){
    int linha,linha2,coluna;

    linha = 1;
    coluna = 1;
    while (linha <= 10)
    {
        while (coluna <= linha )
        {
            printf("#");
            coluna++;
        }
        coluna = linha;
        printf("\n");
        linha++;

    }
    return 0;
} 