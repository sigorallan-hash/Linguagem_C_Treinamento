#include<stdio.h>
#include<stdlib.h>
    
    int soma(int v1, int v2){
        printf
        ("O valor de v1 em soma é %d\n",v1);
        printf
        ("O endereço de v1 em soma é %p\n",&v1);

        printf
        ("O endereço de v2 em soma é %d\n",v2);
        printf
        ("O valor do endereço do v2 é %p\n",v2);

    return v1 + v2;
    }

int main()
{
  int num1, num2;
  num1 = 10;
  num2 = 15;

  int
  *pnum1 = &num1;
  int
  *pnum2 = &num2;

  printf
  ("O valor de de num1 é%d\n",num1);
  printf
  ("O valor endereço de num1 é %d\n"*num1);

  printf
  ("O valor de de num2 é%d\n",num2);
  printf
  ("O valor endereço de num2 é %d\n"*num2);
}    