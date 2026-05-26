  #include <stdio.h>
  int main(){


  int num1;
  int num2;
  int soma;
  int subtrair;
  int multiplicar;
  int divisao;


  printf("coloque um número inteiro ");
  scanf("%d",&num1);
  printf("agora o outro para o mesmo dividir-lo ");
  scanf("%d",&num2);
  

  soma = num1 + num2;
  subtrair = num1 - num2;
  multiplicar = num1 / num2;
  divisao = num1 * num2;
  
  printf("o resultado de somar %d e %d resultou em %d\n",num1,num2,soma);
  printf("o resultado de multiplicar %d e %d resultou em %d\n",num1,num2,multiplicar);
  printf("o resultado de subtração %d e %d resultou em %d\n",num1,num2,subtrair);
  printf("o resultado de divisão %d e %d resultou em %d\n",num1,num2,divisao);

  
  return 0;
}