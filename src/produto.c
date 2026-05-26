//800

// 800.50
// 890.90

// 6% 6.8%

// int(inteiro -> não tem casas decimais.)
// float(usa ponto flutuante, ou seja, uso de casas decimais.)
// doble( maior precisão, usa mais casas decimas.)

// #include (< = indica número menor.)(> = indica número maior.)

// este programas usa as variaveis com tipo de dado float, pois,

// este programa recebe valores com casas decimais

// há dois tipos de orgânização de letras em uma variavel, sendo float, int e/ou doble. usamos
/*
camel case, exemplo: ResultadoDeOperacao
snake case, exemplo: resultado_de_operacao
simple case, exemplo: resultadodeoperacao
*/

// ~~


#include <stdio.h>
int main(){
    
    float preco;
    float taxa;
    float parcelas;
    float  resultado;
    float resultado_das_parcelas;


    printf("Digite o preço do produto e tecle enter \n");
    scanf("%f",&preco);

    printf("Digite a taxa de acrecimo sem o simbolo de porcentagem e tecle enter \n");
    scanf("%f",&taxa);

    printf("Digite o número de parcelas e tecle enter \n");
    scanf("%f",&parcelas);
    
    
    resultado = preco * (taxa / 100) * preco;
    resultado_das_parcelas = resultado / parcelas;
    
    
    printf("O valor final do produto é R$ %.2f\n",resultado);
    printf("O valor da parcela é R$ %.2f\n",resultado_das_parcelas);
    
    return 0;
}