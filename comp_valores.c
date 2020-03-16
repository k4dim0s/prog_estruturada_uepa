#include<stdio.h>
#include<stdlib.h>
//#include <math.h>

int main()
{  
    //declaração de variaveis
    int a, b;


    //leitura de valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o primeiro valor: ");
    scanf("%d", &b);

    //calculo dos valores
    if(a > b)
    {
        printf("O maior é %d", a);
    }else{
        printf("O maior é %d", b);
    }

    return 0;
}