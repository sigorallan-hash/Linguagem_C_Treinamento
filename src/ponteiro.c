#include<stdio.h>
#include<stdlib.h>

  int main(){

    int a = 35;
    int *pa = &a;
    
    printf
    ("O valor da variavel é %d\n",a);
    printf
    ("O endereço de memória da variavel é %p\n",pa);
    printf
    ("O valor que está na vaiavel a é %d\n",*pa);

    return 0;
  }